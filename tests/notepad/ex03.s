new notepad

;makefunc -f -@010030F6
;decompile -@010058B8
;decompile -@0100299E
;decompile -@01002950


;$abort
;$abortif

makefunc -@1005320	
makefunc -@10053C6
makefunc -@1005459
makefunc -@1005640
makefunc -f -@01004C1D
makefunc -f -@010041FC
makefunc -f -@01003AC0
makefunc -f -@010030F6
makefunc -f -@010031EE
makefunc -f -@01003250
makefunc -f -@01002F01
makefunc -f -@01002D6E
makefunc -f -@01002B44
makefunc -f -@01002B7D
makefunc -f -@0100248F
makefunc -f -@01001978

makeint -f -@1001400 -a			; ascii string
makeint -f -@1001708 -u			; unicode string

newsrc src/main
decompile -@01006420 -n WinMainCRTStartup
;$abortif

newsrc src/nputf
decompile -@010063B4 -n IsInputTextUnicode
decompile -@01006364 -n IsTextUTF8
;$abort


newsrc src/npfile
decompile -@01005887 -n ReverseEndian
decompile -@010058B8 -n AnsiWriteFile
decompile -@0100592E -n ClearFmt
decompile -@01005970 -n RestoreFmt
decompile -@010059A3 -n SaveFile
decompile -@01005C6F -n LoadFile
decompile -@010061E3 -n New
decompile -@010062A7 -n AddExt
decompile -@010062F0 -n AlertUser_FileFail


newsrc src/npmisc
decompile -@01005320 -n ReverseScan
decompile -@010053C6 -n ForwardScan
decompile -@01005459 -n Search
decompile -@01005640 -n NpReCreate

newsrc src/npdate
decompile -@010051EE -n InsertDateTime


newsrc src/npinit
decompile -@01004116 -n RegWriteInt
decompile -@01004132 -n RegWriteString
decompile -@0100415A -n RegGetInt
decompile -@010041A8 -n RegGetString
decompile -@010041FC -n SaveGlobals
;decompile -@01004444 -n GetGlobals
decompile -@010046D0 -n GetFileName
decompile -@0100476B -n SizeStrings
decompile -@010047EE -n InitStrings
decompile -@010048A3 -n SkipBlanks
decompile -@010048BD -n ProcessSetupOption
decompile -@01004A15 -n lstrncmpi	;?
decompile -@01004A5E -n ProcessShellOptions
decompile -@01004BC0 -n CreateFilter
decompile -@01004C1D -n EnumProc
decompile -@01004C30 -n NPInit
decompile -@0100515F -n NPRegister
decompile -@010051ED -n InitLocale


newsrc src/npprint
decompile -@010031EE -n AbortProc
decompile -@01003250 -n AbortDlgProc
decompile -@010032D5 -n PrintHeaderFooter
decompile -@010033F6 -n GetResolutions
decompile -@0100344D -n GetPrinterDCviaDialog
decompile -@01003515 -n NpPrint
decompile -@0100355F -n NpPrintGivenDC
decompile -@01003A9E -n DestroyAbortWnd
decompile -@01003AC0 -n PageSetupHookProc
	;decompile -@01003BED -n TranslateString
decompile -@01003EFC -n GetPrinterDC
decompile -@01003F9E -n GetNonDefPrinterDC
decompile -@01004068 -n PrintIt

newsrc src/notepad
decompile -@010018CF -n SetPageSetupDefaults
decompile -@0100194B -n NPSize
decompile -@01001978 -n NpSaveDialogHookProc
decompile -@01001AE3 -n NPCommand
decompile -@0100219C -n FileDragOpen
decompile -@010021F3 -n doDrop
decompile -@01002239 -n CheckSave
decompile -@0100248F -n NPWndProc
decompile -@01002950 -n SkipProgramName
decompile -@0100299E -n WinMain
decompile -@01002A91 -n SetTitle
decompile -@01002B44 -n PFileInPath
decompile -@01002B7D -n NpResetMenu
decompile -@01002C93 -n MergeStrings
decompile -@01002CF5 -n AlertBox
decompile -@01002D6E -n SignalCommDlgError
decompile -@01002DE1 -n ReplaceSel
decompile -@01002F01 -n GotoDlgProc
decompile -@0100318F



;$abort
$abortif

setoutdir notepad/ex03

gensrc -u -d -l -s
gensrc -b -d -l

;$abort

save notepad/ex03/saved
close
open notepad/ex03/saved

setoutdir notepad/ex03/.loaded
gensrc -u -d -l -s
gensrc -b -d -l
