 section code

* OS-9 system function equates

F$Exit equ $06 

_dumprof EXTERNAL
_tidyup EXTERNAL
exit EXPORT
_exit EXPORT

exit: lbsr  _dumprof 
 lbsr  _tidyup 
_exit: ldd   2,s 
 os9 $06 F$Exit 

 endsect
