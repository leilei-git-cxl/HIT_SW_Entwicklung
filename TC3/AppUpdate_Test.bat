cd C:\Program Files (x86)\WinSCP
WinSCP.exe /console /command "option batch continue" "option confirm off" "open scp://ssh_user:ssh_user@192.168.200.102:22" "option transfer binary" "put C:\Users\wsun\Dropbox\HIT_Workspace\auftrage_deutschebahn_TC3\result\ProDB_AppErrorManage /mnt/dataflash/Sun_Dir/" "exit"
WinSCP.exe /console /command "option batch continue" "option confirm off" "open scp://ssh_user:ssh_user@192.168.200.102:22" "option transfer binary" "put C:\Users\wsun\Dropbox\HIT_Workspace\auftrage_deutschebahn_TC3\result\ProDB_AppNetwork /mnt/dataflash/Sun_Dir/" "exit"
WinSCP.exe /console /command "option batch continue" "option confirm off" "open scp://ssh_user:ssh_user@192.168.200.102:22" "option transfer binary" "put C:\Users\wsun\Dropbox\HIT_Workspace\auftrage_deutschebahn_TC3\result\ProDB_AppMonitor /mnt/dataflash/Sun_Dir/" "exit"
