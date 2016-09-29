#
# Regular cron jobs for the glslviewer package
#
0 4	* * *	root	[ -x /usr/bin/glslviewer_maintenance ] && /usr/bin/glslviewer_maintenance
