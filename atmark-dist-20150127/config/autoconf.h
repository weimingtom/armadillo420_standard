/*
 * Automatically generated C config: don't edit
 */
#define AUTOCONF_INCLUDED

/*
 * Vendor specific
 */

/*
 * Applications
 */

/*
 * Kernel modules
 */

/*
 * Fonts
 */
#undef  CONFIG_FONTS_TAKAO
#undef  CONFIG_FONTS_VL

/*
 * Core Applications
 */
#undef  CONFIG_USER_INIT_INIT
#undef  CONFIG_USER_INIT_CONSOLE_SH
#undef  CONFIG_USER_INIT_RUN_FIREWALL
#undef  CONFIG_USER_INIT_CONF
#undef  CONFIG_USER_SASH_SH
#undef  CONFIG_USER_SH_SH
#undef  CONFIG_USER_NWSH_SH
#undef  CONFIG_USER_BASH_BASH
#define CONFIG_USER_OTHER_SH 1
#undef  CONFIG_USER_SASH_REBOOT
#undef  CONFIG_USER_SASH_REBOOT_SNAPGEAR
#undef  CONFIG_USER_SASH_SHUTDOWN
#undef  CONFIG_USER_INIT_EXPAND
#undef  CONFIG_USER_VERSION_VERSION
#undef  CONFIG_USER_LOGIN_LOGIN
#undef  CONFIG_USER_OLD_PASSWORDS
#undef  CONFIG_USER_ONLY_ROOT
#undef  CONFIG_USER_AGETTY_AGETTY
#undef  CONFIG_USER_GETTYD_GETTYD
#undef  CONFIG_USER_LOGIN_PASSWD
#undef  CONFIG_USER_CRON_CRON

/*
 * Real Time Clock
 */
#define CONFIG_USER_HWCLOCK_HWCLOCK 1
#undef  CONFIG_USER_RTC_M41T11
#undef  CONFIG_USER_RTC_DS1302

/*
 * Vixie-cron
 */
#undef  CONFIG_USER_VIXIECRON_CRON
#undef  CONFIG_USER_VIXIECRON_CRONTAB

/*
 * at
 */
#undef  CONFIG_USER_AT_AT
#undef  CONFIG_USER_AT_ATD
#undef  CONFIG_USER_AT_ATRUN

/*
 * Library Configuration
 */
#define CONFIG_BUILD_APPDEP_LIB 1

/*
 * Force build (Normally built when required)
 */
#define CONFIG_LIB_LIBNET_FORCE 1
#undef  CONFIG_LIB_FLEX_FORCE
#undef  CONFIG_LIB_LIBAES_FORCE
#undef  CONFIG_LIB_LIBDES_FORCE
#undef  CONFIG_LIB_LIBSSL_FORCE
#undef  CONFIG_LIB_LIBGMP_FORCE
#undef  CONFIG_LIB_LIBG_FORCE
#undef  CONFIG_LIB_LIBLDAP_FORCE
#undef  CONFIG_LIB_LIBPAM_FORCE
#undef  CONFIG_LIB_LIBPCAP_FORCE
#define CONFIG_LIB_ZLIB_FORCE 1
#undef  CONFIG_LIB_LIBATM_FORCE
#undef  CONFIG_LIB_LIBPNG_FORCE
#undef  CONFIG_LIB_LIBJPEG_FORCE
#define CONFIG_LIB_LIBSYSFS2_FORCE 1

/*
 * sysutils tools
 */
#define CONFIG_LIB_LIBSYSFS2_SYSTOOL 1
#define CONFIG_LIB_LIBSYSFS2_GET_DEVICE 1
#define CONFIG_LIB_LIBSYSFS2_GET_DRIVER 1
#define CONFIG_LIB_LIBSYSFS2_GET_MODULE 1
#undef  CONFIG_LIB_LIBUPNP_FORCE
#undef  CONFIG_LIB_NCURSES_FORCE
#undef  CONFIG_LIB_STLPORT
#undef  CONFIG_LIB_STLPORT_SHARED
#undef  CONFIG_LIB_EXPAT_FORCE
#undef  CONFIG_LIB_ADNS_FORCE
#undef  CONFIG_LIB_LIBCRYPT_OLD_FORCE

/*
 * Library Configuration
 */
#undef  CONFIG_LIB_UC_LIBC_TIMEZONE
#define CONFIG_LIB_NSS_MDNS_NSS_MDNS 1

/*
 * Flash Tools
 */
#undef  CONFIG_USER_FLASHW_FLASHW
#define CONFIG_USER_NETFLASH_NETFLASH 1
#define CONFIG_USER_NETFLASH_WITH_FTP 1
#undef  CONFIG_USER_NETFLASH_WITH_CGI
#define CONFIG_USER_NETFLASH_VERSION 1
#define CONFIG_USER_NETFLASH_VERSION_ALLOW_CURRENT 1
#undef  CONFIG_USER_NETFLASH_VERSION_ALLOW_OLDER
#undef  CONFIG_USER_NETFLASH_DECOMPRESS
#undef  CONFIG_USER_NETFLASH_HMACMD5
#undef  CONFIG_USER_RECOVER_BIOS
#undef  CONFIG_USER_RECOVER_STATIC_TFTP
#undef  CONFIG_USER_RECOVER_RECOVER
#undef  CONFIG_USER_BOOTTOOLS_FLASHLOADER
#undef  CONFIG_USER_BOOTTOOLS_HIMEMLOADER
#undef  CONFIG_USER_SETMAC_SETMAC

/*
 * MTD utils
 */
#define CONFIG_USER_MTDUTILS 1
#undef  CONFIG_USER_MTDUTILS_OLD
#define CONFIG_USER_MTDUTILS_NEW 1
#define CONFIG_USER_MTDUTILS_FLASH_ERASE 1
#define CONFIG_USER_MTDUTILS_FLASH_ERASEALL 1
#define CONFIG_USER_MTDUTILS_FLASH_INFO 1
#define CONFIG_USER_MTDUTILS_FLASH_LOCK 1
#define CONFIG_USER_MTDUTILS_FLASH_UNLOCK 1
#undef  CONFIG_USER_MTDUTILS_FLASH_OTP_INFO
#undef  CONFIG_USER_MTDUTILS_FLASH_OTP_DUMP
#undef  CONFIG_USER_MTDUTILS_FLASHCP
#undef  CONFIG_USER_MTDUTILS_FTL_CHECK
#undef  CONFIG_USER_MTDUTILS_FTL_FORMAT
#define CONFIG_USER_MTDUTILS_NFTL_FORMAT 1
#define CONFIG_USER_MTDUTILS_NFTLDUMP 1
#undef  CONFIG_USER_MTDUTILS_RFDFORMAT
#undef  CONFIG_USER_MTDUTILS_RFDDUMP
#define CONFIG_USER_MTDUTILS_NANDDUMP 1
#define CONFIG_USER_MTDUTILS_NANDWRITE 1
#undef  CONFIG_USER_MTDUTILS_NANDTEST
#undef  CONFIG_USER_MTDUTILS_DOC_LOADBIOS
#undef  CONFIG_USER_MTDUTILS_DOCFDISK
#undef  CONFIG_USER_MTDUTILS_MKFSJFFS2
#undef  CONFIG_USER_MTDUTILS_JFFS2DUMP
#undef  CONFIG_USER_MTDUTILS_MTD_DEBUG
#undef  CONFIG_USER_MTDUTILS_SUMTOOL
#undef  CONFIG_USER_MTDUTILS_RECV_IMAGE
#undef  CONFIG_USER_MTDUTILS_SERVE_IMAGE
#define CONFIG_LIB_ZLIB 1

/*
 * Filesystem Applications
 */
#define CONFIG_USER_FLATFSD_FLATFSD 1
#define CONFIG_USER_FLATFSD_AUTO 1
#undef  CONFIG_USER_FLATFSD_USE_FLASH_FS
#undef  CONFIG_USER_FLATFSD_DISKLIKE
#define CONFIG_USER_FLATFSD_COMPRESSED 1
#define CONFIG_USER_FLATFSD_HAS_RTC 1
#undef  CONFIG_USER_FLATFSD_FLATFSD_OLD
#undef  CONFIG_USER_MOUNT_MOUNT
#undef  CONFIG_USER_MOUNT_UMOUNT
#undef  CONFIG_USER_FDISK_FDISK
#undef  CONFIG_USER_FDISK_SFDISK

/*
 * EXT2
 */
#define CONFIG_USER_E2FSPROGS_E2FSCK_E2FSCK 1
#define CONFIG_USER_E2FSPROGS_MISC_MKE2FS 1
#undef  CONFIG_USER_E2FSPROGS_MISC_BADBLOCKS
#undef  CONFIG_USER_E2FSPROGS_MISC_CHATTR
#undef  CONFIG_USER_E2FSPROGS_MISC_DUMPE2FS
#undef  CONFIG_USER_E2FSPROGS_MISC_E2LABEL
#define CONFIG_USER_E2FSPROGS_MISC_FSCK 1
#undef  CONFIG_USER_E2FSPROGS_MISC_LSATTR
#undef  CONFIG_USER_E2FSPROGS_MISC_MKLOST_FOUND
#define CONFIG_USER_E2FSPROGS_MISC_TUNE2FS 1
#undef  CONFIG_USER_E2FSPROGS_MISC_UUIDGEN

/*
 * RESIERFS
 */
#undef  CONFIG_USER_REISERFSPROGS
#undef  CONFIG_USER_REISERFSPROGS_DEBUGRESIERFS
#undef  CONFIG_USER_REISERFSPROGS_MKREISERFS
#undef  CONFIG_USER_REISERFSPROGS_REISERFSCK
#undef  CONFIG_USER_REISERFSPROGS_RESIZE_REISERFS
#undef  CONFIG_USER_REISERFSPROGS_UNPACK

/*
 * MSDOS
 */
#define CONFIG_USER_DOSFSTOOLS_DOSFSCK_DOSFSCK 1
#undef  CONFIG_USER_DOSFSTOOLS_DOSFSLABEL_DOSFSLABEL
#define CONFIG_USER_DOSFSTOOLS_MKDOSFS_MKDOSFS 1

/*
 * SAMBA
 */
#undef  CONFIG_USER_SAMBA
#undef  CONFIG_USER_SAMBA_SMBD
#undef  CONFIG_USER_SAMBA_NMBD
#undef  CONFIG_USER_SAMBA_SMBMOUNT
#undef  CONFIG_USER_SAMBA_SMBUMOUNT

/*
 * SMBFS
 */
#undef  CONFIG_USER_SMBMOUNT_SMBMOUNT
#undef  CONFIG_USER_SMBMOUNT_SMBUMOUNT

/*
 * CRAMFS
 */
#undef  CONFIG_USER_CRAMFS_CRAMFSCK
#undef  CONFIG_USER_CRAMFS_MKCRAMFS

/*
 * SQUASHFS
 */
#undef  CONFIG_USER_SQUASHFSTOOLS_MKSQUASHFS
#undef  CONFIG_USER_SQUASHFSTOOLS_UNSQUASHFS

/*
 * Network Applications
 */
#undef  CONFIG_USER_APPWEB_APPWEB
#undef  CONFIG_USER_ROUTE_ARP
#define CONFIG_USER_AVAHI_AVAHI 1
#undef  CONFIG_USER_FNORD_HTTPD
#undef  CONFIG_USER_BOA_SRC_BOA
#undef  CONFIG_USER_BPALOGIN_BPALOGIN
#undef  CONFIG_USER_BR2684CTL_BR2684CTL
#undef  CONFIG_USER_BRCFG_BRCFG
#undef  CONFIG_USER_BRCTL_BRCTL
#undef  CONFIG_USER_CANUTILS_CANUTILS
#undef  CONFIG_USER_CURL_CURL
#undef  CONFIG_USER_DHCPCD_DHCPCD
#undef  CONFIG_USER_DHCPCD_NEW_DHCPCD
#undef  CONFIG_USER_DHCPD_DHCPD
#undef  CONFIG_USER_DHCP_ISC_SERVER_DHCPD
#undef  CONFIG_USER_DHCP_ISC_CLIENT_DHCLIENT
#undef  CONFIG_USER_DHCP_ISC_RELAY_DHCRELAY
#undef  CONFIG_USER_DIALD_DIALD
#undef  CONFIG_USER_DISCARD_DISCARD
#undef  CONFIG_USER_DISCARD_INETD_ECHO
#undef  CONFIG_USER_DISCOVERD_DISCOVERD
#undef  CONFIG_USER_DNSMASQ_DNSMASQ
#undef  CONFIG_USER_ETHATTACH_ETHATTACH
#define CONFIG_USER_ETHTOOL_ETHTOOL 1
#undef  CONFIG_USER_EZIPUPDATE_EZIPUPDATE
#undef  CONFIG_USER_FAKEIDENTD_IDENTD
#define CONFIG_USER_FTP_FTP_FTP 1
#define CONFIG_USER_FTPD_FTPD 1
#undef  CONFIG_USER_FREESWAN
#undef  CONFIG_USER_HTTPD_HTTPD
#undef  CONFIG_USER_HTTPTUNNEL_CLIENT
#undef  CONFIG_USER_HTTPTUNNEL_SERVER
#undef  CONFIG_USER_IFATTACH_IFATTACH
#undef  CONFIG_USER_ROUTE_IFCONFIG
#undef  CONFIG_USER_INETD_INETD
#undef  CONFIG_USER_IPCHAINS_IPCHAINS
#undef  CONFIG_USER_IPFWADM_IPFWADM
#undef  CONFIG_USER_IPMASQADM_IPMASQADM
#undef  CONFIG_USER_IPPORTFW_IPPORTFW
#undef  CONFIG_USER_IPREDIR_IPREDIR
#undef  CONFIG_USER_IPROUTE2
#define CONFIG_USER_IPTABLES_IPTABLES 1
#undef  CONFIG_USER_LAYER7_PROTOCOLS
#undef  CONFIG_USER_IPTABLES_IP6TABLES
#undef  CONFIG_USER_IPUTILS_IPUTILS
#undef  CONFIG_USER_KENDIN_CONFIG
#undef  CONFIG_USER_KLAXON_KLAXON
#undef  CONFIG_USER_L2TPD_L2TPD
#define CONFIG_USER_LIGHTTPD_LIGHTTPD 1
#undef  CONFIG_USER_LINUXIGD_LINUXIGD
#undef  CONFIG_USER_LOATTACH_LOATTACH
#undef  CONFIG_USER_LRPSTAT_LRPSTAT
#undef  CONFIG_USER_MADWIFI_TOOLS
#define CONFIG_USER_SMTP_SMTPCLIENT 1
#undef  CONFIG_USER_MAIL_MAIL_IP
#undef  CONFIG_USER_ROUTE_MIITOOL
#undef  CONFIG_USER_MINI_HTTPD_MINI_HTTPD
#undef  CONFIG_USER_MSNTP_MSNTP
#undef  CONFIG_USER_NESSUS_NASL
#undef  CONFIG_USER_NETCAT_NETCAT
#undef  CONFIG_USER_ROUTE_NETSTAT
#undef  CONFIG_USER_NETSTAT_NAT_NETSTAT_NAT
#undef  CONFIG_USER_NETPIPE_NPMEMCPY
#undef  CONFIG_USER_NETPIPE_NPTCP
#define CONFIG_USER_NTPCLIENT_NTPCLIENT 1
#undef  CONFIG_USER_NTPCLIENT_ADJTIMEX
#undef  CONFIG_USER_NTPD_NTPD
#undef  CONFIG_USER_NTPD_NTPDATE
#undef  CONFIG_USER_NTPD_NTPQ
#define CONFIG_USER_OPENSSH 1
#define CONFIG_USER_OPENSSH_VER_4_3P2 1
#undef  CONFIG_USER_OPENSSH_VER_6_0P1
#define CONFIG_USER_OPENSSH_SSH 1
#define CONFIG_USER_OPENSSH_SSHD 1
#undef  CONFIG_USER_OPENSSH_SFTPSERVER
#undef  CONFIG_USER_OPENSSH_SSHKEYSIGN
#undef  CONFIG_USER_OPENSSH_SSHRAND
#define CONFIG_USER_OPENSSH_SSHKEYGEN 1
#undef  CONFIG_USER_OPENSSH_SSHKEYSCAN
#undef  CONFIG_USER_OPENSSH_SSHAGENT
#undef  CONFIG_USER_OPENSSH_SSHADD
#undef  CONFIG_USER_OPENSSH_SFTP
#undef  CONFIG_USER_OPENSSH_SCP
#undef  CONFIG_USER_OPENSSL_APPS
#define CONFIG_USER_PING_PING 1
#undef  CONFIG_USER_PLUG_PLUG
#undef  CONFIG_USER_PORTMAP_PORTMAP
#define CONFIG_USER_PPPD_PPPD_PPPD 1
#undef  CONFIG_USER_PPTPD_PPTPCTRL
#undef  CONFIG_USER_PPTPD_PPTPD
#undef  CONFIG_USER_PPTP_CLIENT_PPTP
#undef  CONFIG_USER_PPTP_CLIENT_PPTP_CALLMGR
#undef  CONFIG_USER_RDATE_RDATE
#undef  CONFIG_USER_ROUTE_ROUTE
#undef  CONFIG_USER_ROUTED_ROUTED
#undef  CONFIG_USER_RP_PPPOE_PPPOE
#undef  CONFIG_USER_RP_PPPOE_PPPOE_SERVER
#undef  CONFIG_USER_RSYSLOGD_RSYSLOGD
#undef  CONFIG_USER_SER_SER
#undef  CONFIG_USER_SERI2ETH_SERI2ETH
#undef  CONFIG_USER_SETHDLC_SETHDLC
#undef  CONFIG_USER_SLATTACH_SLATTACH
#undef  CONFIG_USER_SNMPD_SNMPD
#undef  CONFIG_USER_SNORT_SNORT
#undef  CONFIG_USER_SPEEDTOUCH_MODEM_RUN
#undef  CONFIG_USER_STUNNEL_STUNNEL
#undef  CONFIG_USER_SSLWRAP_SSLWRAP
#undef  CONFIG_USER_SQUID_SQUID
#undef  CONFIG_USER_SSH_SSH
#undef  CONFIG_USER_SSH_SSHD
#undef  CONFIG_USER_SSH_SSHKEYGEN
#undef  CONFIG_USER_STP_STP
#undef  CONFIG_USER_TCPWRAP_TCPD
#undef  CONFIG_USER_TCPBLAST_TCPBLAST
#undef  CONFIG_USER_TCPDUMP_TCPDUMP
#undef  CONFIG_USER_TELNETD_TELNETD
#undef  CONFIG_USER_TELNET_TELNET
#define CONFIG_USER_TFTP_TFTP 1
#undef  CONFIG_USER_TFTPD_TFTPD
#undef  CONFIG_USER_THTTPD_THTTPD
#define CONFIG_USER_THTTPD_HTPASSWD 1
#undef  CONFIG_USER_TRACEROUTE_TRACEROUTE
#undef  CONFIG_USER_UCDSNMP
#undef  CONFIG_USER_VCONFIG_VCONFIG
#undef  CONFIG_USER_VPNLED_VPNLED
#define CONFIG_USER_WGET 1
#define CONFIG_USER_ZCIP_ZCIP 1
#undef  CONFIG_USER_ZEBRA_ZEBRA_ZEBRA

/*
 * Net-tools
 */
#undef  CONFIG_USER_NET_TOOLS_ARP
#undef  CONFIG_USER_NET_TOOLS_HOSTNAME
#undef  CONFIG_USER_NET_TOOLS_IFCONFIG
#undef  CONFIG_USER_NET_TOOLS_NAMEIF
#undef  CONFIG_USER_NET_TOOLS_NETSTAT
#undef  CONFIG_USER_NET_TOOLS_PLIPCONFIG
#undef  CONFIG_USER_NET_TOOLS_RARP
#undef  CONFIG_USER_NET_TOOLS_ROUTE
#undef  CONFIG_USER_NET_TOOLS_SLATTACH
#undef  CONFIG_USER_NET_TOOLS_MII_TOOL

/*
 * Wireless-tools
 */
#define CONFIG_USER_WIRELESS_TOOLS 1
#undef  CONFIG_USER_WIRELESS_TOOLS_IFRENAME
#define CONFIG_USER_WIRELESS_TOOLS_IWCONFIG 1
#undef  CONFIG_USER_WIRELESS_TOOLS_IWEVENT
#undef  CONFIG_USER_WIRELESS_TOOLS_IWGETID
#define CONFIG_USER_WIRELESS_TOOLS_IWLIST 1
#define CONFIG_USER_WIRELESS_TOOLS_IWPRIV 1
#undef  CONFIG_USER_WIRELESS_TOOLS_IWSPY
#undef  CONFIG_USER_HOSTAP_HOSTAP
#undef  CONFIG_USER_WLAN_NG

/*
 * Miscellaneous Applications
 */
#undef  CONFIG_USER_A500FXDEMO_A500FXDEMO
#undef  CONFIG_USER_LANG_A60
#undef  CONFIG_USER_ARMSD
#define CONFIG_USER_AT_CGI 1
#undef  CONFIG_USER_AT_CGI_TOPONLY
#define CONFIG_USER_AT_CGI_SYSTEM 1
#undef  CONFIG_USER_AT_CGI_FIREWALL
#undef  CONFIG_USER_AT_CGI_BRIDGE
#undef  CONFIG_USER_AT_CGI_USBDATA
#undef  CONFIG_USER_AT_CGI_PACKETSCAN
#undef  CONFIG_USER_CAL_CAL
#undef  CONFIG_USER_CHAT_CHAT
#undef  CONFIG_USER_CKSUM_CKSUM
#undef  CONFIG_USER_CLOCK_CLOCK
#undef  CONFIG_USER_CPU_CPU
#undef  CONFIG_USER_CRYPTO_TOOLS_CRYPTOTEST
#undef  CONFIG_USER_CRYPTO_TOOLS_CRYPTOKEYTEST
#undef  CONFIG_USER_CAL_DATE
#undef  CONFIG_USER_DHRYSTONE_DHRYSTONE
#undef  CONFIG_USER_DE2TSCAL_DE2TSCAL
#define CONFIG_USER_EVTEST_EVTEST 1
#undef  CONFIG_USER_EXPAT_EXAMPLES
#define CONFIG_USER_EXPECT_EXPECT 1
#undef  CONFIG_USER_FROB_LED_FROB_LED
#undef  CONFIG_USER_GDBSERVER_GDBREPLAY
#undef  CONFIG_USER_GDBSERVER_GDBSERVER
#undef  CONFIG_USER_GREP_GREP
#undef  CONFIG_USER_HD_HD
#undef  CONFIG_USER_I2CTOOLS
#undef  CONFIG_USER_JAVA
#undef  CONFIG_USER_LCD_LCD
#undef  CONFIG_USER_LEDCON_LEDCON
#undef  CONFIG_USER_LILO_LILO
#undef  CONFIG_USER_LISSA_LISSA
#undef  CONFIG_USER_LPR
#undef  CONFIG_USER_LUA_LUA
#undef  CONFIG_USER_USBCBI_USBCBI
#undef  CONFIG_USER_USBISO_USBISO
#undef  CONFIG_USER_MATH_TEST
#undef  CONFIG_USER_MAWK_AWK
#undef  CONFIG_USER_MOSQUITTO_MOSQUITTO_CLIENT
#undef  CONFIG_USER_NULL_NULL
#undef  CONFIG_USER_PALMBOT_PALMBOT
#undef  CONFIG_USER_PCMCIA_CS
#undef  CONFIG_USER_PCMCIAUTILS
#undef  CONFIG_USER_PERL_PERL
#undef  CONFIG_USER_PYTHON_PYTHON
#undef  CONFIG_USER_READPROFILE_READPROFILE
#undef  CONFIG_USER_ROOTLOADER_ROOTLOADER
#undef  CONFIG_USER_RTNOTIFYD
#undef  CONFIG_USER_RUBY_RUBY
#undef  CONFIG_USER_SETSERIAL_SETSERIAL
#undef  CONFIG_USER_TRIPWIRE_SIGGEN
#undef  CONFIG_USER_STRACE_STRACE
#undef  CONFIG_USER_STTY_STTY
#define CONFIG_USER_SUDO 1
#undef  CONFIG_USER_TCSH_TCSH
#undef  CONFIG_USER_TINYTCL_TCLSH
#undef  CONFIG_USER_THREADDEMOS_THREADDEMOS
#define CONFIG_USER_TIP_TIP 1
#undef  CONFIG_USER_TRIPWIRE_TRIPWIRE
#undef  CONFIG_USER_TSLIBUTILS
#define CONFIG_USER_UDEV 1
#define CONFIG_USER_UDEV_UDEVD 1
#define CONFIG_USER_UDEV_UDEVTRIGGER 1
#define CONFIG_USER_UDEV_UDEVSETTLE 1
#define CONFIG_USER_UDEV_UDEVCONTROL 1
#define CONFIG_USER_UDEV_UDEVMONITOR 1
#define CONFIG_USER_UDEV_UDEVINFO 1

/*
 * extra modules
 */
#undef  CONFIG_USER_UDEV_EXTRA_ATA_ID
#undef  CONFIG_USER_UDEV_EXTRA_CDROM_ID
#undef  CONFIG_USER_UDEV_EXTRA_DASD_ID
#undef  CONFIG_USER_UDEV_EXTRA_EDD_ID
#undef  CONFIG_USER_UDEV_EXTRA_PATH_ID
#undef  CONFIG_USER_UDEV_EXTRA_SCSI_ID
#undef  CONFIG_USER_UDEV_EXTRA_USB_ID
#undef  CONFIG_USER_UDEV_EXTRA_VOLUME_ID
#undef  CONFIG_USER_UDEV_EXTRA_FIRMWARE
#undef  CONFIG_USER_USBMGR
#undef  CONFIG_USER_WATCHDOG_WATCHDOG
#define CONFIG_USER_LRZSZ_LRZSZ 1
#define CONFIG_USER_LRZSZ_LRZ 1
#define CONFIG_USER_LRZSZ_LSZ 1

/*
 * LIRC
 */
#undef  CONFIG_USER_LIRC
#undef  CONFIG_USER_LIRC_LIRCD
#undef  CONFIG_USER_LIRC_IRRECORD
#undef  CONFIG_USER_LIRC_LIRCMD
#undef  CONFIG_USER_LIRC_IREXEC
#undef  CONFIG_USER_LIRC_IRW
#undef  CONFIG_USER_LIRC_MODE2

/*
 * Editors
 */
#undef  CONFIG_USER_LEVEE_VI
#undef  CONFIG_USER_ELVISTINY_VI

/*
 * Multimedia tools
 */
#undef  CONFIG_USER_GSTREAMER_1_0
#undef  CONFIG_USER_GSTREAMER_0_10

/*
 * Audio tools
 */
#define CONFIG_USER_ALSAUTILS 1
#define CONFIG_USER_ALSAUTILS_APLAY 1
#define CONFIG_USER_ALSAUTILS_AMIXER 1
#define CONFIG_USER_ALSAUTILS_ARECORD 1
#undef  CONFIG_USER_BPLAY_BPLAY
#undef  CONFIG_USER_MP3PLAY_MP3PLAY
#undef  CONFIG_USER_OGGPLAY_OGG123
#undef  CONFIG_USER_OGGPLAY_EXAMPLE
#undef  CONFIG_USER_MUSICBOX_MUSICBOX
#undef  CONFIG_USER_PLAY_PLAY
#undef  CONFIG_USER_PLAY_TONE
#undef  CONFIG_USER_VPLAY_VPLAY
#undef  CONFIG_USER_VPLAY_VREC
#undef  CONFIG_USER_VPLAY_MIXER
#undef  CONFIG_USER_PLAYRT_PLAYRT

/*
 * Graphics tools
 */
#undef  CONFIG_USER_IMAGEMAGICK

/*
 * Video tools
 */
#undef  CONFIG_USER_CAMCTRL
#undef  CONFIG_USER_CAMSERV
#undef  CONFIG_USER_FBGRAB_FBGRAB
#define CONFIG_USER_MJPGSTREAMER 1
#undef  CONFIG_USER_MJPGSTREAMER94_MJPGSTREAMER
#define CONFIG_USER_MJPGSTREAMER182_MJPGSTREAMER 1
#undef  CONFIG_USER_UVCGADGET_UVCGADGET
#undef  CONFIG_USER_V4LUTILS_V4L2COMPLIANCE
#define CONFIG_USER_V4LUTILS_V4L2CTL 1
#undef  CONFIG_USER_V4LUTILS_V4L2DBG
#undef  CONFIG_USER_W3CAM_VIDCAT
#undef  CONFIG_USER_W3CAM_W3CAMD

/*
 * Fileutils tools
 */
#undef  CONFIG_USER_FILEUTILS_CAT
#undef  CONFIG_USER_FILEUTILS_CHGRP
#undef  CONFIG_USER_FILEUTILS_CHMOD
#undef  CONFIG_USER_FILEUTILS_CHOWN
#undef  CONFIG_USER_FILEUTILS_CMP
#undef  CONFIG_USER_FILEUTILS_CP
#undef  CONFIG_USER_FILEUTILS_DD
#undef  CONFIG_USER_FILEUTILS_GREP
#undef  CONFIG_USER_FILEUTILS_L
#undef  CONFIG_USER_FILEUTILS_LN
#undef  CONFIG_USER_FILEUTILS_LS
#undef  CONFIG_USER_FILEUTILS_MKDIR
#undef  CONFIG_USER_FILEUTILS_MKFIFO
#undef  CONFIG_USER_FILEUTILS_MKNOD
#undef  CONFIG_USER_FILEUTILS_MORE
#undef  CONFIG_USER_FILEUTILS_MV
#undef  CONFIG_USER_FILEUTILS_RM
#undef  CONFIG_USER_FILEUTILS_RMDIR
#undef  CONFIG_USER_FILEUTILS_SYNC
#undef  CONFIG_USER_FILEUTILS_TOUCH

/*
 * Shutils tools
 */
#undef  CONFIG_USER_SHUTILS_BASENAME
#undef  CONFIG_USER_SHUTILS_DATE
#undef  CONFIG_USER_SHUTILS_DIRNAME
#undef  CONFIG_USER_SHUTILS_ECHO
#undef  CONFIG_USER_SHUTILS_FALSE
#undef  CONFIG_USER_SHUTILS_LOGNAME
#undef  CONFIG_USER_SHUTILS_PRINTENV
#undef  CONFIG_USER_SHUTILS_PWD
#undef  CONFIG_USER_SHUTILS_TRUE
#undef  CONFIG_USER_SHUTILS_UNAME
#undef  CONFIG_USER_SHUTILS_WHICH
#undef  CONFIG_USER_SHUTILS_WHOAMI
#undef  CONFIG_USER_SHUTILS_YES

/*
 * Sysutils tools
 */
#undef  CONFIG_USER_SYSUTILS_REBOOT
#undef  CONFIG_USER_SYSUTILS_SHUTDOWN
#undef  CONFIG_USER_SYSUTILS_DF
#undef  CONFIG_USER_SYSUTILS_FREE
#undef  CONFIG_USER_SYSUTILS_HOSTNAME
#undef  CONFIG_USER_SYSUTILS_KILL
#undef  CONFIG_USER_SYSUTILS_PS

/*
 * Procps tools
 */
#undef  CONFIG_USER_PROCPS_FREE
#undef  CONFIG_USER_PROCPS_KILL
#undef  CONFIG_USER_PROCPS_PGREP
#undef  CONFIG_USER_PROCPS_PKILL
#undef  CONFIG_USER_PROCPS_PMAP
#undef  CONFIG_USER_PROCPS_PS
#undef  CONFIG_USER_PROCPS_PWDX
#undef  CONFIG_USER_PROCPS_SKILL
#undef  CONFIG_USER_PROCPS_SLABTOP
#undef  CONFIG_USER_PROCPS_SNICE
#undef  CONFIG_USER_PROCPS_SYSCTL
#undef  CONFIG_USER_PROCPS_TLOAD
#undef  CONFIG_USER_PROCPS_TOP
#undef  CONFIG_USER_PROCPS_UPTIME
#undef  CONFIG_USER_PROCPS_VMSTAT
#undef  CONFIG_USER_PROCPS_W
#undef  CONFIG_USER_PROCPS_WATCH

/*
 * PCI utilities
 */
#undef  CONFIG_USER_PCIUTILS_LSPCI
#undef  CONFIG_USER_PCIUTILS_SETPCI

/*
 * 
 */
#undef  CONFIG_USER_CXXTEST_CXXTEST

/*
 * BusyBox
 */
#define CONFIG_USER_BUSYBOX_BUSYBOX 1
#define CONFIG_USER_BUSYBOX_1_00_RC3 1
#undef  CONFIG_USER_BUSYBOX_1_20_2

/*
 * Applets
 */
#define CONFIG_USER_BUSYBOX_ADDGROUP 1
#define CONFIG_USER_BUSYBOX_ADDUSER 1
#define CONFIG_USER_BUSYBOX_ADJTIMEX 1
#define CONFIG_USER_BUSYBOX_AR 1
#define CONFIG_USER_BUSYBOX_AR_LONG_FILENAMES 1
#define CONFIG_USER_BUSYBOX_ARPING 1
#define CONFIG_USER_BUSYBOX_AWK 1
#define CONFIG_USER_BUSYBOX_AWK_MATH 1
#define CONFIG_USER_BUSYBOX_BASENAME 1
#define CONFIG_USER_BUSYBOX_BUNZIP2 1
#define CONFIG_USER_BUSYBOX_CAL 1
#define CONFIG_USER_BUSYBOX_CAT 1
#define CONFIG_USER_BUSYBOX_CHGRP 1
#define CONFIG_USER_BUSYBOX_CHMOD 1
#define CONFIG_USER_BUSYBOX_CHOWN 1
#define CONFIG_USER_BUSYBOX_CHROOT 1
#define CONFIG_USER_BUSYBOX_CHVT 1
#define CONFIG_USER_BUSYBOX_CLEAR 1
#define CONFIG_USER_BUSYBOX_CMP 1
#define CONFIG_USER_BUSYBOX_CP 1
#define CONFIG_USER_BUSYBOX_PRESERVE_HARDLINKS 1
#define CONFIG_USER_BUSYBOX_CPIO 1
#define CONFIG_USER_BUSYBOX_CROND 1
#define CONFIG_USER_BUSYBOX_CROND_CALL_SENDMAIL 1
#define CONFIG_USER_BUSYBOX_CRONTAB 1
#define CONFIG_USER_BUSYBOX_CUT 1
#define CONFIG_USER_BUSYBOX_DATE 1
#define CONFIG_USER_BUSYBOX_DATE_ISOFMT 1
#define CONFIG_USER_BUSYBOX_DC 1
#define CONFIG_USER_BUSYBOX_DD 1
#define CONFIG_USER_BUSYBOX_DEALLOCVT 1
#define CONFIG_USER_BUSYBOX_DELGROUP 1
#define CONFIG_USER_BUSYBOX_DELUSER 1
#undef  CONFIG_USER_BUSYBOX_DEVFSD
#define CONFIG_USER_BUSYBOX_DF 1
#define CONFIG_USER_BUSYBOX_DIRNAME 1
#define CONFIG_USER_BUSYBOX_DMESG 1
#define CONFIG_USER_BUSYBOX_DOS2UNIX 1
#define CONFIG_USER_BUSYBOX_DPKG 1
#define CONFIG_USER_BUSYBOX_DPKG_DEB 1
#define CONFIG_USER_BUSYBOX_DEB_TAR_BZ2 1
#define CONFIG_USER_BUSYBOX_DEB_TAR_GZ 1
#define CONFIG_USER_BUSYBOX_DPKG_DEB_EXTRACT_ONLY 1
#define CONFIG_USER_BUSYBOX_DUTMP 1
#define CONFIG_USER_BUSYBOX_DU 1
#define CONFIG_USER_BUSYBOX_DU_DEFALT_BLOCKSIZE_1K 1
#define CONFIG_USER_BUSYBOX_DUMPKMAP 1
#define CONFIG_USER_BUSYBOX_ECHO 1
#define CONFIG_USER_BUSYBOX_FANCY_ECHO 1
#define CONFIG_USER_BUSYBOX_ENV 1
#define CONFIG_USER_BUSYBOX_EXPR 1
#define CONFIG_USER_BUSYBOX_FBSET 1
#define CONFIG_USER_BUSYBOX_FBSET_FANCY 1
#define CONFIG_USER_BUSYBOX_FBSET_READMODE 1
#define CONFIG_USER_BUSYBOX_FDFLUSH 1
#define CONFIG_USER_BUSYBOX_FDFORMAT 1
#define CONFIG_USER_BUSYBOX_FDISK 1
#define CONFIG_USER_BUSYBOX_FDISK_SUPPORT_LARGE_DISKS 1
#define CONFIG_USER_BUSYBOX_FDISK_WRITABLE 1
#define CONFIG_USER_BUSYBOX_AIX_LABEL 1
#define CONFIG_USER_BUSYBOX_FDISK_ADVANCED 1
#define CONFIG_USER_BUSYBOX_OSF_LABEL 1
#define CONFIG_USER_BUSYBOX_SGI_LABEL 1
#define CONFIG_USER_BUSYBOX_SUN_LABEL 1
#define CONFIG_USER_BUSYBOX_FIND 1
#define CONFIG_USER_BUSYBOX_FIND_TYPE 1
#define CONFIG_USER_BUSYBOX_FIND_PERM 1
#define CONFIG_USER_BUSYBOX_FIND_MTIME 1
#define CONFIG_USER_BUSYBOX_FIND_NEWER 1
#define CONFIG_USER_BUSYBOX_FIND_INUM 1
#define CONFIG_USER_BUSYBOX_FIND_XDEV 1
#define CONFIG_USER_BUSYBOX_FOLD 1
#define CONFIG_USER_BUSYBOX_FREE 1
#define CONFIG_USER_BUSYBOX_FREERAMDISK 1
#define CONFIG_USER_BUSYBOX_FSCK_MINIX 1
#define CONFIG_USER_BUSYBOX_FTPGET 1
#define CONFIG_USER_BUSYBOX_FTPPUT 1
#define CONFIG_USER_BUSYBOX_GETOPT 1
#define CONFIG_USER_BUSYBOX_GETTY 1
#define CONFIG_USER_BUSYBOX_GREP 1
#define CONFIG_USER_BUSYBOX_GREP_CONTEXT 1
#define CONFIG_USER_BUSYBOX_GREP_EGREP_ALIAS 1
#define CONFIG_USER_BUSYBOX_GREP_FGREP_ALIAS 1
#define CONFIG_USER_BUSYBOX_GUNZIP 1
#define CONFIG_USER_BUSYBOX_GUNZIP_UNCOMPRESS 1
#define CONFIG_USER_BUSYBOX_GZIP 1
#define CONFIG_USER_BUSYBOX_HALT 1
#define CONFIG_USER_BUSYBOX_HDPARM 1
#define CONFIG_USER_BUSYBOX_HDPARM_GET_IDENTITY 1
#define CONFIG_USER_BUSYBOX_HDPARM_HDIO_SCAN_HWIF 1
#define CONFIG_USER_BUSYBOX_HDPARM_HDIO_UNREGISTER_HWIF 1
#define CONFIG_USER_BUSYBOX_HDPARM_HDIO_DRIVE_RESET 1
#define CONFIG_USER_BUSYBOX_HDPARM_HDIO_TRISTATE_HWIF 1
#define CONFIG_USER_BUSYBOX_HDPARM_HDIO_GETSET_DMA 1
#define CONFIG_USER_BUSYBOX_HEAD 1
#define CONFIG_USER_BUSYBOX_FANCY_HEAD 1
#define CONFIG_USER_BUSYBOX_HEXDUMP 1
#define CONFIG_USER_BUSYBOX_HOSTID 1
#define CONFIG_USER_BUSYBOX_HOSTNAME 1
#undef  CONFIG_USER_BUSYBOX_HTTPD
#define CONFIG_USER_BUSYBOX_HWCLOCK 1
#define CONFIG_USER_BUSYBOX_HWCLOCK_LONGOPTIONS 1
#define CONFIG_USER_BUSYBOX_ID 1
#define CONFIG_USER_BUSYBOX_IFCONFIG 1
#define CONFIG_USER_BUSYBOX_IFCONFIG_STATUS 1
#define CONFIG_USER_BUSYBOX_IFCONFIG_SLIP 1
#define CONFIG_USER_BUSYBOX_IFCONFIG_HW 1
#define CONFIG_USER_BUSYBOX_IFCONFIG_MEMSTART_IOADDR_IRQ 1
#define CONFIG_USER_BUSYBOX_IFCONFIG_BROADCAST_PLUS 1
#define CONFIG_USER_BUSYBOX_IFUPDOWN 1
#define CONFIG_USER_BUSYBOX_IFUPDOWN_IP 1
#define CONFIG_USER_BUSYBOX_IFUPDOWN_IP_BUILTIN 1
#define CONFIG_USER_BUSYBOX_IFUPDOWN_IPV4 1
#define CONFIG_USER_BUSYBOX_IFUPDOWN_IPV6 1
#undef  CONFIG_USER_BUSYBOX_IFUPDOWN_IPX
#undef  CONFIG_USER_BUSYBOX_IFUPDOWN_MAPPING
#define CONFIG_USER_BUSYBOX_IFUPDOWN_FLATFSD 1
#define CONFIG_USER_BUSYBOX_INETD 1
#define CONFIG_USER_BUSYBOX_INETD_SUPPORT_BILTIN_CHARGEN 1
#define CONFIG_USER_BUSYBOX_INETD_SUPPORT_BILTIN_DAYTIME 1
#define CONFIG_USER_BUSYBOX_INETD_SUPPORT_BILTIN_DISCARD 1
#define CONFIG_USER_BUSYBOX_INETD_SUPPORT_BILTIN_ECHO 1
#define CONFIG_USER_BUSYBOX_INETD_SUPPORT_BILTIN_TIME 1
#define CONFIG_USER_BUSYBOX_INIT 1
#define CONFIG_USER_BUSYBOX_USE_INITTAB 1
#define CONFIG_USER_BUSYBOX_LINUXRC 1
#define CONFIG_USER_BUSYBOX_INIT_COREDUMPS 1
#define CONFIG_USER_BUSYBOX_INITRD 1
#undef  CONFIG_USER_BUSYBOX_INIT_DISABLE_LOG
#define CONFIG_USER_BUSYBOX_INSMOD 1
#define CONFIG_USER_BUSYBOX_LSMOD 1
#define CONFIG_USER_BUSYBOX_MODPROBE 1
#define CONFIG_USER_BUSYBOX_RMMOD 1
#undef  CONFIG_USER_BUSYBOX_2_2_MODULES
#define CONFIG_USER_BUSYBOX_2_4_MODULES 1
#define CONFIG_USER_BUSYBOX_2_6_MODULES 1
#define CONFIG_USER_BUSYBOX_INSMOD_VERSION_CHECKING 1
#define CONFIG_USER_BUSYBOX_CHECK_TAINTED_MODULE 1
#define CONFIG_USER_BUSYBOX_INSMOD_LOADINKMEM 1
#define CONFIG_USER_BUSYBOX_INSMOD_KSYMOOPS_SYMBOLS 1
#define CONFIG_USER_BUSYBOX_INSMOD_LOAD_MAP 1
#define CONFIG_USER_BUSYBOX_INSMOD_LOAD_MAP_FULL 1
#define CONFIG_USER_BUSYBOX_IP 1
#define CONFIG_USER_BUSYBOX_IPADDR 1
#define CONFIG_USER_BUSYBOX_IPCALC 1
#define CONFIG_USER_BUSYBOX_IPCALC_FANCY 1
#define CONFIG_USER_BUSYBOX_IPLINK 1
#define CONFIG_USER_BUSYBOX_IPROUTE 1
#define CONFIG_USER_BUSYBOX_IPTUNNEL 1
#define CONFIG_USER_BUSYBOX_KILL 1
#define CONFIG_USER_BUSYBOX_KILLALL 1
#define CONFIG_USER_BUSYBOX_KLOGD 1
#define CONFIG_USER_BUSYBOX_LENGTH 1
#define CONFIG_USER_BUSYBOX_LAST 1
#define CONFIG_USER_BUSYBOX_LN 1
#define CONFIG_USER_BUSYBOX_LOADACM 1
#define CONFIG_USER_BUSYBOX_LOADFONT 1
#define CONFIG_USER_BUSYBOX_LOADKMAP 1
#define CONFIG_USER_BUSYBOX_LOGGER 1
#define CONFIG_USER_BUSYBOX_LOGIN 1
#define CONFIG_USER_BUSYBOX_SECURETTY 1
#define CONFIG_USER_BUSYBOX_LOGNAME 1
#define CONFIG_USER_BUSYBOX_LOGREAD 1
#define CONFIG_USER_BUSYBOX_LOGREAD_REDUCED_LOCKING 1
#define CONFIG_USER_BUSYBOX_LOSETUP 1
#define CONFIG_USER_BUSYBOX_LS 1
#define CONFIG_USER_BUSYBOX_LS_USERNAME 1
#define CONFIG_USER_BUSYBOX_LS_TIMESTAMPS 1
#define CONFIG_USER_BUSYBOX_LS_FILETYPES 1
#define CONFIG_USER_BUSYBOX_LS_SORTFILES 1
#define CONFIG_USER_BUSYBOX_LS_RECURSIVE 1
#define CONFIG_USER_BUSYBOX_LS_FOLLOWLINKS 1
#define CONFIG_USER_BUSYBOX_LS_COLOR 1
#define CONFIG_USER_BUSYBOX_MAKEDEVS 1
#define CONFIG_USER_BUSYBOX_MD5SUM 1
#define CONFIG_USER_BUSYBOX_MD5_SHA1_SUM_CHECK 1
#define CONFIG_USER_BUSYBOX_MESG 1
#define CONFIG_USER_BUSYBOX_MKDIR 1
#define CONFIG_USER_BUSYBOX_MKFIFO 1
#define CONFIG_USER_BUSYBOX_MKFS_MINIX 1
#define CONFIG_USER_BUSYBOX_MKNOD 1
#define CONFIG_USER_BUSYBOX_MKSWAP 1
#define CONFIG_USER_BUSYBOX_MKTEMP 1
#define CONFIG_USER_BUSYBOX_MORE 1
#define CONFIG_USER_BUSYBOX_USE_TERMIOS 1
#define CONFIG_USER_BUSYBOX_MOUNT 1
#define CONFIG_USER_BUSYBOX_MOUNT_LOOP 1
#define CONFIG_USER_BUSYBOX_MTAB_SUPPORT 1
#define CONFIG_USER_BUSYBOX_MTAB_FILENAME "/etc/mtab"
#define CONFIG_USER_BUSYBOX_NFSMOUNT 1
#define CONFIG_USER_BUSYBOX_MT 1
#define CONFIG_USER_BUSYBOX_MV 1
#define CONFIG_USER_BUSYBOX_NAMEIF 1
#define CONFIG_USER_BUSYBOX_NC 1
#define CONFIG_USER_BUSYBOX_NETSTAT 1
#define CONFIG_USER_BUSYBOX_NSLOOKUP 1
#define CONFIG_USER_BUSYBOX_OD 1
#define CONFIG_USER_BUSYBOX_OPENVT 1
#define CONFIG_USER_BUSYBOX_PASSWD 1
#define CONFIG_USER_BUSYBOX_PATCH 1
#define CONFIG_USER_BUSYBOX_PIDOF 1
#undef  CONFIG_USER_BUSYBOX_PING
#define CONFIG_USER_BUSYBOX_PING6 1
#define CONFIG_USER_BUSYBOX_PIPE_PROGRESS 1
#define CONFIG_USER_BUSYBOX_PIVOT_ROOT 1
#define CONFIG_USER_BUSYBOX_POWEROFF 1
#define CONFIG_USER_BUSYBOX_PRINTF 1
#define CONFIG_USER_BUSYBOX_PS 1
#define CONFIG_USER_BUSYBOX_PWD 1
#define CONFIG_USER_BUSYBOX_RDATE 1
#define CONFIG_USER_BUSYBOX_REALPATH 1
#define CONFIG_USER_BUSYBOX_READLINK 1
#define CONFIG_USER_BUSYBOX_REBOOT 1
#define CONFIG_USER_BUSYBOX_RENICE 1
#define CONFIG_USER_BUSYBOX_RESET 1
#define CONFIG_USER_BUSYBOX_RM 1
#define CONFIG_USER_BUSYBOX_RMDIR 1
#define CONFIG_USER_BUSYBOX_ROUTE 1
#define CONFIG_USER_BUSYBOX_RPM2CPIO 1
#define CONFIG_USER_BUSYBOX_RUN_PARTS 1
#define CONFIG_USER_BUSYBOX_RX 1
#define CONFIG_USER_BUSYBOX_SED 1
#define CONFIG_USER_BUSYBOX_SEQ 1
#define CONFIG_USER_BUSYBOX_SETKEYCODES 1
#define CONFIG_USER_BUSYBOX_SHELL 1
#define CONFIG_USER_BUSYBOX_ASH 1
#define CONFIG_USER_BUSYBOX_SH_IS_ASH 1
#define CONFIG_USER_BUSYBOX_ASH_ALIAS 1
#define CONFIG_USER_BUSYBOX_ASH_CMDCMD 1
#define CONFIG_USER_BUSYBOX_ASH_GETOPTS 1
#define CONFIG_USER_BUSYBOX_ASH_JOB_CONTROL 1
#define CONFIG_USER_BUSYBOX_ASH_MAIL 1
#define CONFIG_USER_BUSYBOX_ASH_MATH_SUPPORT 1
#define CONFIG_USER_BUSYBOX_ASH_MATH_SUPPORT_64 1
#define CONFIG_USER_BUSYBOX_ASH_OPTIMIZE_FOR_SIZE 1
#define CONFIG_USER_BUSYBOX_ASH_RANDOM_SUPPORT 1
#undef  CONFIG_USER_BUSYBOX_HUSH
#undef  CONFIG_USER_BUSYBOX_SH_IS_HUSH
#undef  CONFIG_USER_BUSYBOX_LASH
#undef  CONFIG_USER_BUSYBOX_SH_IS_LASH
#undef  CONFIG_USER_BUSYBOX_MSH
#undef  CONFIG_USER_BUSYBOX_SH_IS_MSH
#define CONFIG_USER_BUSYBOX_COMMAND_EDITING 1
#define CONFIG_USER_BUSYBOX_COMMAND_HISTORY (15)
#define CONFIG_USER_BUSYBOX_COMMAND_SAVEHISTORY 1
#define CONFIG_USER_BUSYBOX_COMMAND_TAB_COMPLETION 1
#define CONFIG_USER_BUSYBOX_COMMAND_USERNAME_COMPLETION 1
#define CONFIG_USER_BUSYBOX_TAB_COMPLETION 1
#define CONFIG_USER_BUSYBOX_USERNAME_COMPLETION 1
#define CONFIG_USER_BUSYBOX_SH_STANDALONE_SHELL 1
#define CONFIG_USER_BUSYBOX_SH_APPLETS_ALWAYS_WIN 1
#define CONFIG_USER_BUSYBOX_SH_FANCY_PROMPT 1
#define CONFIG_USER_BUSYBOX_SH_EXTRA_QUIET 1
#define CONFIG_USER_BUSYBOX_SHA1SUM 1
#define CONFIG_USER_BUSYBOX_SLEEP 1
#define CONFIG_USER_BUSYBOX_FANCY_SLEEP 1
#define CONFIG_USER_BUSYBOX_SORT 1
#define CONFIG_USER_BUSYBOX_SORT_REVERSE 1
#define CONFIG_USER_BUSYBOX_SORT_UNIQUE 1
#define CONFIG_USER_BUSYBOX_START_STOP_DAEMON 1
#define CONFIG_USER_BUSYBOX_STRINGS 1
#define CONFIG_USER_BUSYBOX_STTY 1
#define CONFIG_USER_BUSYBOX_SU 1
#define CONFIG_USER_BUSYBOX_SULOGIN 1
#define CONFIG_USER_BUSYBOX_SWAPONOFF 1
#define CONFIG_USER_BUSYBOX_SYNC 1
#define CONFIG_USER_BUSYBOX_SYSCTL 1
#define CONFIG_USER_BUSYBOX_SYSLOGD 1
#define CONFIG_USER_BUSYBOX_ROTATE_LOGFILE 1
#define CONFIG_USER_BUSYBOX_REMOTE_LOG 1
#define CONFIG_USER_BUSYBOX_IPC_SYSLOG 1
#define CONFIG_USER_BUSYBOX_IPC_SYSLOG_BUFFER_SIZE (16)
#define CONFIG_USER_BUSYBOX_TAIL 1
#define CONFIG_USER_BUSYBOX_FANCY_TAIL 1
#define CONFIG_USER_BUSYBOX_TAR 1
#define CONFIG_USER_BUSYBOX_TAR_CREATE 1
#define CONFIG_USER_BUSYBOX_TAR_EXCLUDE 1
#define CONFIG_USER_BUSYBOX_TAR_GZIP 1
#define CONFIG_USER_BUSYBOX_TAR_BZIP2 1
#define CONFIG_USER_BUSYBOX_TAR_COMPRESS 1
#define CONFIG_USER_BUSYBOX_TAR_FROM 1
#define CONFIG_USER_BUSYBOX_TAR_GNU_EXTENSIONS 1
#define CONFIG_USER_BUSYBOX_TAR_LONG_OPTIONS 1
#define CONFIG_USER_BUSYBOX_TAR_OLDGNU_COMPATABILITY 1
#define CONFIG_USER_BUSYBOX_TEE 1
#define CONFIG_USER_BUSYBOX_TEE_USE_BLOCK_IO 1
#define CONFIG_USER_BUSYBOX_TELNET 1
#define CONFIG_USER_BUSYBOX_TELNET_TTYPE 1
#define CONFIG_USER_BUSYBOX_TELNET_AUTOLOGIN 1
#define CONFIG_USER_BUSYBOX_TELNETD 1
#define CONFIG_USER_BUSYBOX_TELNETD_INETD 1
#define CONFIG_USER_BUSYBOX_TEST 1
#define CONFIG_USER_BUSYBOX_TEST_64 1
#define CONFIG_USER_BUSYBOX_TFTP 1
#define CONFIG_USER_BUSYBOX_TFTP_PUT 1
#define CONFIG_USER_BUSYBOX_TFTP_GET 1
#define CONFIG_USER_BUSYBOX_TFTP_BLOCKSIZE 1
#define CONFIG_USER_BUSYBOX_TFTP_DEBUG 1
#define CONFIG_USER_BUSYBOX_TIME 1
#define CONFIG_USER_BUSYBOX_TOP 1
#define CONFIG_USER_BUSYBOX_CPU_USAGE_PERCENTAGE 1
#define CONFIG_USER_BUSYBOX_TOUCH 1
#define CONFIG_USER_BUSYBOX_TR 1
#define CONFIG_USER_BUSYBOX_TRACEROUTE 1
#define CONFIG_USER_BUSYBOX_TRACEROUTE_VERBOSE 1
#define CONFIG_USER_BUSYBOX_TRUE_FALSE 1
#define CONFIG_USER_BUSYBOX_TTY 1
#define CONFIG_USER_BUSYBOX_UDHCPC 1
#undef  CONFIG_USER_BUSYBOX_UDHCPD
#undef  CONFIG_USER_BUSYBOX_UDHCP_DEBUG
#define CONFIG_USER_BUSYBOX_UDHCP_SYSLOG 1
#define CONFIG_USER_BUSYBOX_UMOUNT 1
#define CONFIG_USER_BUSYBOX_MOUNT_FORCE 1
#define CONFIG_USER_BUSYBOX_UNAME 1
#define CONFIG_USER_BUSYBOX_UNCOMPRESS 1
#define CONFIG_USER_BUSYBOX_UNIQ 1
#define CONFIG_USER_BUSYBOX_UNIX2DOS 1
#define CONFIG_USER_BUSYBOX_UPDATE 1
#define CONFIG_USER_BUSYBOX_UPTIME 1
#define CONFIG_USER_BUSYBOX_USLEEP 1
#define CONFIG_USER_BUSYBOX_UUDECODE 1
#define CONFIG_USER_BUSYBOX_UUENCODE 1
#define CONFIG_USER_BUSYBOX_UNZIP 1
#define CONFIG_USER_BUSYBOX_VCONFIG 1
#define CONFIG_USER_BUSYBOX_VI 1
#define CONFIG_USER_BUSYBOX_VI_COLON 1
#define CONFIG_USER_BUSYBOX_VI_YANKMARK 1
#define CONFIG_USER_BUSYBOX_VI_SEARCH 1
#define CONFIG_USER_BUSYBOX_VI_USE_SIGNALS 1
#define CONFIG_USER_BUSYBOX_VI_DOT_CMD 1
#define CONFIG_USER_BUSYBOX_VI_READONLY 1
#define CONFIG_USER_BUSYBOX_VI_SETOPTS 1
#define CONFIG_USER_BUSYBOX_VI_SET 1
#define CONFIG_USER_BUSYBOX_VI_WIN_RESIZE 1
#define CONFIG_USER_BUSYBOX_VI_OPTIMIZE_CURSOR 1
#undef  CONFIG_USER_BUSYBOX_VLOCK
#define CONFIG_USER_BUSYBOX_WATCHDOG 1
#define CONFIG_USER_BUSYBOX_WC 1
#undef  CONFIG_USER_BUSYBOX_WGET
#define CONFIG_USER_BUSYBOX_WHICH 1
#define CONFIG_USER_BUSYBOX_WHOAMI 1
#define CONFIG_USER_BUSYBOX_XARGS 1
#define CONFIG_USER_BUSYBOX_XARGS_SUPPORT_CONFIRMATION 1
#define CONFIG_USER_BUSYBOX_XARGS_SUPPORT_QUOTES 1
#define CONFIG_USER_BUSYBOX_XARGS_SUPPORT_TERMOPT 1
#define CONFIG_USER_BUSYBOX_XARGS_SUPPORT_ZERO_TERM 1
#define CONFIG_USER_BUSYBOX_YES 1
#define CONFIG_USER_BUSYBOX_ZIP 1

/*
 * other features
 */
#undef  CONFIG_USER_BUSYBOX_BUFFERS_GO_ON_STACK
#undef  CONFIG_USER_BUSYBOX_BUFFERS_GO_IN_BSS
#undef  CONFIG_USER_BUSYBOX_USE_DEVPS_PATCH
#define CONFIG_USER_BUSYBOX_VERBOSE_USAGE 1
#define CONFIG_USER_BUSYBOX_AUTOWIDTH 1
#undef  CONFIG_USER_BUSYBOX_EXTRA_QUIET
#define CONFIG_USER_BUSYBOX_MINIX2 1
#define CONFIG_USER_BUSYBOX_SHADOWPASSWDS 1
#define CONFIG_USER_BUSYBOX_U_W_TMP 1
#undef  CONFIG_USER_BUSYBOX_USE_BB_PWD_GRP
#undef  CONFIG_USER_BUSYBOX_DMALLOC
#undef  CONFIG_USER_BUSYBOX_EFENCE
#undef  CONFIG_USER_BUSYBOX_BUFFERS_USE_MALLOC
#undef  CONFIG_USER_BUSYBOX_DEVFS
#undef  CONFIG_USER_BUSYBOX_DEVPTS
#define CONFIG_USER_BUSYBOX_SUID 1
#define CONFIG_USER_BUSYBOX_SUID_CONFIG 1
#define CONFIG_USER_BUSYBOX_SUID_CONFIG_QUIET 1
#define CONFIG_USER_BUSYBOX_LFS 1
#undef  CONFIG_USER_BUSYBOX_SELINUX
#undef  CONFIG_USER_BUSYBOX_STATIC
#define CONFIG_USER_BUSYBOX_UNARCHIVE_TAPE 1
#define CONFIG_USER_BUSYBOX_IPV6 1
#undef  CONFIG_USER_BUSYBOX_CLEAN_UP
#define CONFIG_USER_BUSYBOX_HUMAN_READABLE 1
#undef  CONFIG_USER_BUSYBOX_LOCALE_SUPPORT

/*
 * Tinylogin
 */
#undef  CONFIG_USER_TINYLOGIN_TINYLOGIN

/*
 * Qt
 */

/*
 * X Window System
 */
#undef  CONFIG_USER_XSERVER_KDRIVE

/*
 * MicroWindows
 */
#undef  CONFIG_USER_MICROWIN

/*
 * Games
 */
#undef  CONFIG_USER_GAMES_ADVENT4
#undef  CONFIG_USER_GAMES_DUNGEON
#undef  CONFIG_USER_GAMES_RUBIK

/*
 * Miscellaneous Configuration
 */
#define CONFIG_USER_RAMIMAGE_NONE 1
#undef  CONFIG_USER_RAMIMAGE_RAMFS64
#undef  CONFIG_USER_RAMIMAGE_RAMFS128
#undef  CONFIG_USER_RAMIMAGE_RAMFS256
#undef  CONFIG_USER_RAMIMAGE_RAMFS512
#undef  CONFIG_USER_RAMIMAGE_RAMFS1024
#undef  CONFIG_USER_RAMIMAGE_RAMFS2048
#undef  CONFIG_USER_RAMIMAGE_RAMFS8192
#undef  CONFIG_USER_CGI_GENERIC
#undef  CONFIG_USER_CGIHTML
#undef  CONFIG_USER_DEMO_BUTTON
#undef  CONFIG_USER_DEMO_LATCH
#undef  CONFIG_USER_DEMO_MORSE
#undef  CONFIG_USER_DEMO_R2100

/*
 * Debug Builds
 */
#undef  CONFIG_LIB_DEBUG
#undef  CONFIG_USER_DEBUG

/*
 * Debug tools
 */
#undef  CONFIG_USER_TIMEPEG_TPT

/*
 * Debug libraries
 */
#undef  CONFIG_LIB_LIBCCMALLOC
#define CONFIG_VENDOR "AtmarkTechno"
#define CONFIG_PRODUCT "Armadillo-420"
#define CONFIG_LINUXDIR "linux-2.6.x"
#define CONFIG_CROSSDEV "default"
#define CONFIG_LIBCDIR ""
#define CONFIG_LANGUAGE ""
#define VENDORS_AUTOCONF_INCLUDED
#undef AUTOCONF_INCLUDED
