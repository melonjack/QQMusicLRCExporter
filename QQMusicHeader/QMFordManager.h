//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface QMFordManager : NSObject
{
    BOOL _isConnected;
    BOOL _bNeedResumed;
    NSMutableArray *_songListArray;
}

+ (id)shareInstance;
@property(nonatomic) BOOL bNeedResumed; // @synthesize bNeedResumed=_bNeedResumed;
@property(retain, nonatomic) NSMutableArray *songListArray; // @synthesize songListArray=_songListArray;
@property(nonatomic) BOOL isConnected; // @synthesize isConnected=_isConnected;
- (void).cxx_destruct;
- (void)alert:(id)arg1;
- (void)showAlertMsg:(id)arg1;
- (void)_registerHelpCmd;
- (void)_subSubscribeHardBtn;
- (void)_playRadio;
- (void)_prepareChoiceSet;
- (void)showSongList;
- (id)allSoftButtons;
- (id)allSoftButtonCommands;
- (void)_registerAllCmd;
- (id)allSoundCmds;
- (void)receivedRequestResult:(id)arg1;
- (void)fordChoiceCommand:(id)arg1;
- (void)doFordCmdMsg:(int)arg1;
- (void)fordSoftButtonCommand:(id)arg1;
- (void)fordVoiceCommand:(id)arg1;
- (void)fordConnected:(id)arg1;
- (void)audioAviablel;
- (void)audioNotAviablel;
- (void)showMsgWithStr1:(id)arg1 AndStr2:(id)arg2 AndMideaTrack:(id)arg3 NeedTimer:(BOOL)arg4;
- (void)refreshNowPlayingInfo;
- (void)refreshPlayState;
- (void)stop;
- (void)startUp;

@end

