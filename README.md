# ComputerSecurity

Analysis of Program 1:

push    ebp //push ebp onto the stack
mov     ebp, esp //set ebp to esp
and     esp, 0FFFFFFF0h //set esp to 0FFFFFFF0h
sub     esp, 20h //sets esp to 0FFFFFFF0h - 20h = FFFFFFD0h
call    ___main 
mov     dword ptr [esp+1Ch], 3  //set pointer1 to 3
mov     dword ptr [esp+18h], 5 //set pointer2 to 5
mov     dword ptr [esp+14h], 0 //set pointer3 to 0
mov     eax, [esp+1Ch] //set eax to 3
imul    eax, [esp+18h] //multiply eax by 5 eax = 15 
mov     edx, eax //move eax to edx=15
mov     eax, [esp+1Ch] //set eax to 3
mov     ecx, eax //set ecx to eax = 3
shr     ecx, 1Fh // shift bits of ecx right 1Fh (31) times, sets ecx to 00000000 (0)
add     eax, ecx //add 0 to eax
sar     eax, 1 //eax = 00000011 -> eax = 00000001
sub     edx, eax //subtract 1 from 15 -> edx = 14
mov     eax, edx //set eax to 14
mov     [esp+14h], eax //set pointer 3 to 14
mov     eax, [esp+14h] //set eax to 14
mov     [esp+4], eax
mov     dword ptr [esp], offset aD ; "%d" 
call    _printf 
mov     eax, 0 
leave 
retn 
_main endp


