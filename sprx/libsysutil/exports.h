EXPORT(videoGetResolution, 0xe558748d);
EXPORT(videoConfigure, 0x0bae8772);
EXPORT(videoGetState, 0x887572d5);

EXPORT(videoGetDeviceInfo, 0x1e930eef);
EXPORT(videoGetConfiguration, 0x15b0b0cd);
EXPORT(videoGetResolutionAvailability, 0xa322db75);
EXPORT(videoDebugSetMonitorType, 0xcfdf24bb);
EXPORT(videoRegisterCallback, 0x8e8bc444);
EXPORT(videoUnregisterCallback, 0x7871bed4);
EXPORT(videoGetNumberOfDevice, 0x75bbb672);
EXPORT(videoGetConvertCursorColorInfo, 0x55e425c3);

EXPORT(sysRegisterCallback_ex, 0x9d98afa0);
EXPORT(sysCheckCallback, 0x189a74da);
EXPORT(sysUnregisterCallback, 0x02ff3c1b);

EXPORT(sysUtilGetSystemParamInt, 0x40e895d3);
EXPORT(sysUtilGetSystemParamString, 0x938013a0);

EXPORT(msgDialogClose, 0x62b0f803);
EXPORT(msgDialogDelayedClose, 0x20543730);
EXPORT(msgDialogErrorCode_ex, 0x3e22cb4b);;
EXPORT(msgDialogOpen_ex, 0xf81eca25);
EXPORT(msgDialogIncProgressBar, 0x94862702);
EXPORT(msgDialogAbort, 0x62b0f803);
EXPORT(msgDialogOpen2_ex, 0x7603d3db);
EXPORT(msgDialogResetProgressBar, 0x7bc2c8a8);
EXPORT(msgDialogProgressBarMessage, 0x9d6af72a);

EXPORT(oskGetInputText, 0x1d99c3ee);
EXPORT(oskSetInitialInputDevice, 0xf3b4b43e);
EXPORT(oskGetSize, 0x35beade0);
EXPORT(oskUnloadAsync, 0x3d1e1931);
EXPORT(oskDisableDimmer, 0x41f20828);
EXPORT(oskSetKeyLayoutOption, 0xb53c54fa);
EXPORT(oskAbort, 0xb6d84526);
EXPORT(oskSetDeviceMask, 0xd3790a86);
EXPORT(oskSetSeparateWindowOption, 0x53e39df3);
EXPORT(oskAddSupportLanguage, 0x7f21c918);
EXPORT(oskLoadAsync, 0x7fcfc915);
EXPORT(oskSetInitialKeyLayout, 0xc427890c);
EXPORT(oskSetLayoutMode, 0xf0ec3ccc);

EXPORT(audioOutGetNumberOfDevice, 0xe5e2b09d);
EXPORT(audioOutGetDeviceInfo, 0x7663e368);
EXPORT(audioOutGetSoundAvailability, 0xc01b4e7c);
EXPORT(audioOutConfigure, 0x4692ab35);
EXPORT(audioOutGetState, 0xf4e3caa0);
EXPORT(audioOutSetCopyControl, 0xc96e89e9);

EXPORT(webBrowserConfig, 0x7fb3c6a5);
EXPORT(webBrowserConfigSetFunction, 0xe22ed55d);
EXPORT(webBrowserConfigSetTabCount, 0x619b1427);
EXPORT(webBrowserConfigSetHeapSize, 0xfe669845);
EXPORT(webBrowserEstimate, 0x6d087930);
EXPORT(webBrowserInitialize, 0x749c9b5f);
EXPORT(webBrowserCreate, 0xa5f12145);
EXPORT(webBrowserDestroy, 0xe8dee79c);
EXPORT(webBrowserConfigSetUnknownMIMETypeHook, 0xa9a439e0);
EXPORT(webBrowserShutdown, 0x93ced48d);
EXPORT(webBrowserSetRequestHook, 0xee7528f3);
