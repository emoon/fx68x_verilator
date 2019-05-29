@echo off
set name=fx68k

if not exist build mkdir build
if not exist build echo Could not create directory & goto :eof
pushd build

xcopy /y ..\*.v

copy ..\%name%.ucf %name%.ucf
copy ..\%name%.scr
copy ..\%name%.prj

if "%1"=="/xil" goto xilinx

xst -ifn %name%.scr -ofn %name%.srp
if errorlevel 1 goto error

rem :xilinx
rem ngdbuild -nt on -uc fx68k.ucf -uc %name%.ucf %name%.ngc %name%.ngd
rem if errorlevel 1 goto error
rem map -u -cm area %name%.ngd -o %name%.ncd %name%.pcf
re, if errorlevel 1 goto error

copy %name%.ngc ..\

popd
echo Done
goto :eof
:error
popd
echo Error!
pause
