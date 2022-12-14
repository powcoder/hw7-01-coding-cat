https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// SPDX-License-Identifier: GPL-2.0
/* Universal AFS Error codes (UAE).
 *
 * Copyright (C) 2003, Daria Phoebe Brashear
 * Copyright (C) 2018 Red Hat, Inc. All Rights Reserved.
 */

enum {
	UAEPERM			= 0x2f6df00, /* Operation not permitted */
	UAENOENT		= 0x2f6df01, /* No such file or directory */
	UAESRCH			= 0x2f6df02, /* No such process */
	UAEINTR			= 0x2f6df03, /* Interrupted system call */
	UAEIO			= 0x2f6df04, /* I/O error */
	UAENXIO			= 0x2f6df05, /* No such device or address */
	UAE2BIG			= 0x2f6df06, /* Arg list too long */
	UAENOEXEC		= 0x2f6df07, /* Exec format error */
	UAEBADF			= 0x2f6df08, /* Bad file number */
	UAECHILD		= 0x2f6df09, /* No child processes */
	UAEAGAIN		= 0x2f6df0a, /* Try again */
	UAENOMEM		= 0x2f6df0b, /* Out of memory */
	UAEACCES		= 0x2f6df0c, /* Permission denied */
	UAEFAULT		= 0x2f6df0d, /* Bad address */
	UAENOTBLK		= 0x2f6df0e, /* Block device required */
	UAEBUSY			= 0x2f6df0f, /* Device or resource busy */
	UAEEXIST		= 0x2f6df10, /* File exists */
	UAEXDEV			= 0x2f6df11, /* Cross-device link */
	UAENODEV		= 0x2f6df12, /* No such device */
	UAENOTDIR		= 0x2f6df13, /* Not a directory */
	UAEISDIR		= 0x2f6df14, /* Is a directory */
	UAEINVAL		= 0x2f6df15, /* Invalid argument */
	UAENFILE		= 0x2f6df16, /* File table overflow */
	UAEMFILE		= 0x2f6df17, /* Too many open files */
	UAENOTTY		= 0x2f6df18, /* Not a typewriter */
	UAETXTBSY		= 0x2f6df19, /* Text file busy */
	UAEFBIG			= 0x2f6df1a, /* File too large */
	UAENOSPC		= 0x2f6df1b, /* No space left on device */
	UAESPIPE		= 0x2f6df1c, /* Illegal seek */
	UAEROFS			= 0x2f6df1d, /* Read-only file system */
	UAEMLINK		= 0x2f6df1e, /* Too many links */
	UAEPIPE			= 0x2f6df1f, /* Broken pipe */
	UAEDOM			= 0x2f6df20, /* Math argument out of domain of func */
	UAERANGE		= 0x2f6df21, /* Math result not representable */
	UAEDEADLK		= 0x2f6df22, /* Resource deadlock would occur */
	UAENAMETOOLONG		= 0x2f6df23, /* File name too long */
	UAENOLCK		= 0x2f6df24, /* No record locks available */
	UAENOSYS		= 0x2f6df25, /* Function not implemented */
	UAENOTEMPTY		= 0x2f6df26, /* Directory not empty */
	UAELOOP			= 0x2f6df27, /* Too many symbolic links encountered */
	UAEWOULDBLOCK		= 0x2f6df28, /* Operation would block */
	UAENOMSG		= 0x2f6df29, /* No message of desired type */
	UAEIDRM			= 0x2f6df2a, /* Identifier removed */
	UAECHRNG		= 0x2f6df2b, /* Channel number out of range */
	UAEL2NSYNC		= 0x2f6df2c, /* Level 2 not synchronized */
	UAEL3HLT		= 0x2f6df2d, /* Level 3 halted */
	UAEL3RST		= 0x2f6df2e, /* Level 3 reset */
	UAELNRNG		= 0x2f6df2f, /* Link number out of range */
	UAEUNATCH		= 0x2f6df30, /* Protocol driver not attached */
	UAENOCSI		= 0x2f6df31, /* No CSI structure available */
	UAEL2HLT		= 0x2f6df32, /* Level 2 halted */
	UAEBADE			= 0x2f6df33, /* Invalid exchange */
	UAEBADR			= 0x2f6df34, /* Invalid request descriptor */
	UAEXFULL		= 0x2f6df35, /* Exchange full */
	UAENOANO		= 0x2f6df36, /* No anode */
	UAEBADRQC		= 0x2f6df37, /* Invalid request code */
	UAEBADSLT		= 0x2f6df38, /* Invalid slot */
	UAEBFONT		= 0x2f6df39, /* Bad font file format */
	UAENOSTR		= 0x2f6df3a, /* Device not a stream */
	UAENODATA		= 0x2f6df3b, /* No data available */
	UAETIME			= 0x2f6df3c, /* Timer expired */
	UAENOSR			= 0x2f6df3d, /* Out of streams resources */
	UAENONET		= 0x2f6df3e, /* Machine is not on the network */
	UAENOPKG		= 0x2f6df3f, /* Package not installed */
	UAEREMOTE		= 0x2f6df40, /* Object is remote */
	UAENOLINK		= 0x2f6df41, /* Link has been severed */
	UAEADV			= 0x2f6df42, /* Advertise error */
	UAESRMNT		= 0x2f6df43, /* Srmount error */
	UAECOMM			= 0x2f6df44, /* Communication error on send */
	UAEPROTO		= 0x2f6df45, /* Protocol error */
	UAEMULTIHOP		= 0x2f6df46, /* Multihop attempted */
	UAEDOTDOT		= 0x2f6df47, /* RFS specific error */
	UAEBADMSG		= 0x2f6df48, /* Not a data message */
	UAEOVERFLOW		= 0x2f6df49, /* Value too large for defined data type */
	UAENOTUNIQ		= 0x2f6df4a, /* Name not unique on network */
	UAEBADFD		= 0x2f6df4b, /* File descriptor in bad state */
	UAEREMCHG		= 0x2f6df4c, /* Remote address changed */
	UAELIBACC		= 0x2f6df4d, /* Can not access a needed shared library */
	UAELIBBAD		= 0x2f6df4e, /* Accessing a corrupted shared library */
	UAELIBSCN		= 0x2f6df4f, /* .lib section in a.out corrupted */
	UAELIBMAX		= 0x2f6df50, /* Attempting to link in too many shared libraries */
	UAELIBEXEC		= 0x2f6df51, /* Cannot exec a shared library directly */
	UAEILSEQ		= 0x2f6df52, /* Illegal byte sequence */
	UAERESTART		= 0x2f6df53, /* Interrupted system call should be restarted */
	UAESTRPIPE		= 0x2f6df54, /* Streams pipe error */
	UAEUSERS		= 0x2f6df55, /* Too many users */
	UAENOTSOCK		= 0x2f6df56, /* Socket operation on non-socket */
	UAEDESTADDRREQ		= 0x2f6df57, /* Destination address required */
	UAEMSGSIZE		= 0x2f6df58, /* Message too long */
	UAEPROTOTYPE		= 0x2f6df59, /* Protocol wrong type for socket */
	UAENOPROTOOPT		= 0x2f6df5a, /* Protocol not available */
	UAEPROTONOSUPPORT	= 0x2f6df5b, /* Protocol not supported */
	UAESOCKTNOSUPPORT	= 0x2f6df5c, /* Socket type not supported */
	UAEOPNOTSUPP		= 0x2f6df5d, /* Operation not supported on transport endpoint */
	UAEPFNOSUPPORT		= 0x2f6df5e, /* Protocol family not supported */
	UAEAFNOSUPPORT		= 0x2f6df5f, /* Address family not supported by protocol */
	UAEADDRINUSE		= 0x2f6df60, /* Address already in use */
	UAEADDRNOTAVAIL		= 0x2f6df61, /* Cannot assign requested address */
	UAENETDOWN		= 0x2f6df62, /* Network is down */
	UAENETUNREACH		= 0x2f6df63, /* Network is unreachable */
	UAENETRESET		= 0x2f6df64, /* Network dropped connection because of reset */
	UAECONNABORTED		= 0x2f6df65, /* Software caused connection abort */
	UAECONNRESET		= 0x2f6df66, /* Connection reset by peer */
	UAENOBUFS		= 0x2f6df67, /* No buffer space available */
	UAEISCONN		= 0x2f6df68, /* Transport endpoint is already connected */
	UAENOTCONN		= 0x2f6df69, /* Transport endpoint is not connected */
	UAESHUTDOWN		= 0x2f6df6a, /* Cannot send after transport endpoint shutdown */
	UAETOOMANYREFS		= 0x2f6df6b, /* Too many references: cannot splice */
	UAETIMEDOUT		= 0x2f6df6c, /* Connection timed out */
	UAECONNREFUSED		= 0x2f6df6d, /* Connection refused */
	UAEHOSTDOWN		= 0x2f6df6e, /* Host is down */
	UAEHOSTUNREACH		= 0x2f6df6f, /* No route to host */
	UAEALREADY		= 0x2f6df70, /* Operation already in progress */
	UAEINPROGRESS		= 0x2f6df71, /* Operation now in progress */
	UAESTALE		= 0x2f6df72, /* Stale NFS file handle */
	UAEUCLEAN		= 0x2f6df73, /* Structure needs cleaning */
	UAENOTNAM		= 0x2f6df74, /* Not a XENIX named type file */
	UAENAVAIL		= 0x2f6df75, /* No XENIX semaphores available */
	UAEISNAM		= 0x2f6df76, /* Is a named type file */
	UAEREMOTEIO		= 0x2f6df77, /* Remote I/O error */
	UAEDQUOT		= 0x2f6df78, /* Quota exceeded */
	UAENOMEDIUM		= 0x2f6df79, /* No medium found */
	UAEMEDIUMTYPE		= 0x2f6df7a, /* Wrong medium type */
};
