CC	= gcc
CXX	:= g++
LD	:= ld

#	| release	| debug		|
TARGET			:=	debug

#	<major>.<minor>[<.hotfix|-commit|-hash>][<-stage>]
VERSION			:=	0.1-ALPHA
#	| win32		| gnu		| macOS		| freeBSD	| nxHorizon	|
PLATFORM		:=	win32
# 	| x86		| x86_64	| ppc		| arm		| aarch64		|
ARCHITECTURE	:=	x86_64
