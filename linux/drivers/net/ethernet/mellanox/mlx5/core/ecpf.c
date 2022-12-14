https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0 OR Linux-OpenIB */
/* Copyright (c) 2019 Mellanox Technologies. */

#include "ecpf.h"

bool mlx5_read_embedded_cpu(struct mlx5_core_dev *dev)
{
	return (ioread32be(&dev->iseg->initializing) >> MLX5_ECPU_BIT_NUM) & 1;
}

static int mlx5_peer_pf_init(struct mlx5_core_dev *dev)
{
	u32 in[MLX5_ST_SZ_DW(enable_hca_in)] = {};
	int err;

	MLX5_SET(enable_hca_in, in, opcode, MLX5_CMD_OP_ENABLE_HCA);
	err = mlx5_cmd_exec_in(dev, enable_hca, in);
	if (err)
		mlx5_core_err(dev, "Failed to enable peer PF HCA err(%d)\n",
			      err);

	return err;
}

static void mlx5_peer_pf_cleanup(struct mlx5_core_dev *dev)
{
	u32 in[MLX5_ST_SZ_DW(disable_hca_in)] = {};
	int err;

	MLX5_SET(disable_hca_in, in, opcode, MLX5_CMD_OP_DISABLE_HCA);
	err = mlx5_cmd_exec_in(dev, disable_hca, in);
	if (err) {
		mlx5_core_err(dev, "Failed to disable peer PF HCA err(%d)\n",
			      err);
		return;
	}

	err = mlx5_wait_for_pages(dev, &dev->priv.peer_pf_pages);
	if (err)
		mlx5_core_warn(dev, "Timeout reclaiming peer PF pages err(%d)\n",
			       err);
}

int mlx5_ec_init(struct mlx5_core_dev *dev)
{
	if (!mlx5_core_is_ecpf(dev))
		return 0;

	/* ECPF shall enable HCA for peer PF in the same way a PF
	 * does this for its VFs.
	 */
	return mlx5_peer_pf_init(dev);
}

void mlx5_ec_cleanup(struct mlx5_core_dev *dev)
{
	if (!mlx5_core_is_ecpf(dev))
		return;

	mlx5_peer_pf_cleanup(dev);
}
