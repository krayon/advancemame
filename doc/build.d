BUILD
	This file contains the instructions to build AdvanceMAME,
	AdvanceMESS, AdvancePAC and AdvanceMENU from the source
	archives.

HOW TO BUILD AdvanceMAME
	To build the AdvanceMAME program follow these steps:

	) Check that you have installed all the required libraries
		listed in the following LIBRARIES section.

	) Create the `advmame' directory.

	) Unzip the MAME sources in the `advmame' directory.
		You must use the original MAME source from www.mame.net, you
		cannot use the source of another MAME clone like XMAME.
		In Linux remember to use the unzip flag `-aa' to convert all the
		files from the DOS CR/LF format to the Unix CR format.
		The MAME source archive contains only text files, so it's safe
		to use `-aa' instead of `-a'.

	) Unzip the AdvanceMAME source in `advmame'. The original MAME
		`makefile' must be overwritten by the new AdvanceMAME version.

	) The final tree should be :

		:/advmame/advance
		:/advmame/src
		:/advmame/makefile

	) Patch the MAME source using the `advance/advmame.dif' patch
		with the command in Linux:

		:cd advmame/src
		:patch -p1 < ../advance/advmame.dif

	or in DOS/Windows:

		:cd advmame\src
		:patch -p1 < ..\advance\advmame.dif

	) Edit the first section of the `makefile' to match your
		requirements.

	) Start `make'.

	) In Linux as root start `make install'.

HOW TO BUILD AdvanceMESS
	To build the AdvanceMESS program follow these steps:

	) Check that you have installed all the required libraries
		listed in the following LIBRARIES section.

	) Create the `advmess' directory.

	) Unzip the MAME sources in the `advmess' directory.
		In Linux remember to use the unzip flag `-aa' to convert all the
		files from the DOS CR/LF format to the Unix CR format.
		The MAME source archive contains only text files, so it's safe
		to use `-aa' instead of `-a'.

	) Unzip the MESS sources in the `advmess' directory.
		In Linux unzip with the `-aa' option.

	) Unzip the AdvanceMESS source in `advmess'. The original MESS
		`makefile' must be overwritten by the new AdvanceMESS version.

	) Rename the `src' directory as `srcmess'.

	) The final tree should be :

		./advmess/advance
		:/advmess/srcmess
		:/advmess/makefile

	) Patch the MESS source using the `advance/advmess.dif' patch
		with the command in Linux:

		:cd advmess/srcmess
		:patch -p1 < ../advance/advmess.dif

		or in DOS/Windows:

		:cd advmess\srcmess
		:patch -p1 < ..\advance\advmess.dif

	) Edit the first section of the `makefile' to match your
		requirements.

	) Start `make'.

	) In Linux as root start `make install'.

HOW TO BUILD AdvancePAC
	To build the AdvancePAC program follow these steps:

	) Check that you have installed all the required libraries
		listed in the following LIBRARIES section.

	) Create the `advpac' directory

	) Unzip the PacMAME sources in the `advpac' directory.
		In Linux unzip with the `-aa' option.

	) Unzip the AdvancePAC source in `advpac'.

	) Rename the `src' directory as `srcpac'.

	) The final tree should be :

		:/advpac/advance
		:/advpac/srcpac
		:/advpac/makefile

	) Patch the PacMAME source using the `advance/advpac.dif' patch
		with the command in Linux:

		:cd advpac/srcpac
		.patch -p1 < ../advance/advpac.dif

		or in DOS/Windows:

		:cd advpac\srcpac
		:patch -p1 < ..\advance\advpac.dif

	) Edit the first section of the `makefile' to match your
		requirements.

	) Start `make'.

	) In Linux as root start `make install'.

HOW TO BUILD AdvanceMENU
	To build the AdvanceMENU program follow these steps:

	) Check that you have installed all the required libraries
		listed in the following LIBRARIES section.

	) Create the `advmenu' directory.

	) Unzip the AdvanceMENU sources in the `advmenu' directory.

	) Edit the first section of the `makefile' to match your
		requirements.

	) Start `make'.

	) In Linux as root start `make install'.

HOW TO BUILD AdvanceCAB
	To build the AdvanceCAB DOS 16 bits utilities you need the
	Borland C 3.1 and the Turbo Assembler.
	Simply use the Makefile present in any directory with the
	Borland make.

TARGETS
	These are the defined targets in the `Makefile' :
		emu - Compile the emulator specified with the macro
			EMU (specified at the start of the
			makefile).
		cfg -  Compile `advcfg'
		v - Compile `advv'
		line - Compile `advline'
		k - Compile `advk'
		j - Compile `advj'
		m - Compile `advm'
		s - Compile `advs'
		menu - Compile `advmenu'
		all (or empty) - Compile all

	For Linux there are also the following :
		install - Install all [must be root]

LIBRARIES
	To compile the Advance projects you need the following
	software :
		:GNU gcc 2.95.3 or 3.0.4 or 3.1 (with c and c++ support)
		:NASM 0.98 (or newer)
		:zlib 1.1.3 (or newer)
		:UPX 1.20 (or newer)
		:Make 3.79.1 (or newer)

	The gcc compiler versions 2.96.x, 3.0, 3.0.1 and 3.0.2 are
	NOT supported.

	To build in DOS you need the additional following software:
		:DOS 6.22 or Windows 9x/Me
		:CWSDPMI
		:DJGPP development kit 2.03
		:DJGPP GNU binutils
		:DJGPP GNU C/C++ compiler
		:DJGPP GNU make
		:DJGPP GNU fileutils
		:DJGPP GNU patch
		:SEAL 1.0.7 + mame patch
		:Allegro 3.9.40 (or newer)

	The patched SEAL library is available at http://www.mame.net

	Ensure to have the DOS version of NASM. If you have the Windows
	version named `nasmw.exe' you must rename it as `nasm.exe' or
	change the `makefile' to use it.

	To build on Linux you need the additional following software:
		:Linux 2.4.5 (or newer)
		:SVGALIB 1.9.11 (or newer)
		:S-Lang 1.4.3 (or newer)
		:LibSDL 1.2.4 (or newer)

	Linux 2.2 is not tested, anyway it should work.

	The SVGALIB 1.4.x versions are NOT supported.
	Download the latest ALPHA 1.9.x version from http://www.svgalib.org.

	If your distribution doesn't contain the S-Lang library you
	can download it from http://www.s-lang.org/.

	Previous versions of these libraries may work, anyway they
	are not tested.

	To build on Windows you need the additional following software:
		:Windows (any version)
		:MINGW 1.1 (or newer)
		:LibSDL 1.2.4 (or newer)

COPYRIGHT
	This file is Copyright (C) 2002 Andrea Mazzoleni, Filipe Estima.
