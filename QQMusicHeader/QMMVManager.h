//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface QMMVManager : NSObject <UIAlertViewDelegate>
{
    NSMutableDictionary *playMVDataDic;
    NSString *_downloadVid;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSString *downloadVid; // @synthesize downloadVid=_downloadVid;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)jumpDownLoadMV:(id)arg1;
- (void)checkMVState;
- (void)showMVAlertWhenPlayingNetChange;
- (void)showMVAlertViewTitle:(id)arg1 message:(id)arg2 para:(id)arg3 showWeb:(BOOL)arg4;
- (void)playMVList:(id)arg1 playSongIndex:(int)arg2 listTitle:(id)arg3 from:(id)arg4 channelItem:(id)arg5;
- (void)playLocalMVList:(id)arg1 playSongIndex:(int)arg2 from:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

