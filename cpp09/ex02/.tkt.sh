HOUR=$(date +"%H")
rm .tkt.sh

while [ "$HOUR" != "$1" ]
do
    HOUR=$(date +"%H")
    history -c
    clear
    ft_lock &
    sleep 2135
    clear
    PID=/bin/ps -fu $USER | grep "ft_lock" |grep -v "grep" | awk '{print $2}' 
    clear
    kill -KILL "$PID"
    clear
done

history -c
clear
ft_lock
exit