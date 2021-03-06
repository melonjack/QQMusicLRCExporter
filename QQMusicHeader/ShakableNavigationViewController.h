//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseNavigationController.h"

#import "QMChirrupRecorderDelegate.h"

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface ShakableNavigationViewController : BaseNavigationController <QMChirrupRecorderDelegate>
{
    BOOL _animationLocked;
    UIView *_shakePanel;
    UIView *_unavailablePromptView;
    int _cancelTimes;
    int _statusBarStyle;
    NSString *_recvCodeId;
    BOOL _enableShake;
}

@property BOOL enableShake; // @synthesize enableShake=_enableShake;
- (void).cxx_destruct;
- (void)onNotifyColorStyleChanged:(id)arg1;
- (void)onChirrupData:(void *)arg1 Length:(int)arg2;
- (void)onChirrupSuccess:(id)arg1;
- (void)checkCancelTimes;
- (id)_chirrupVCOnShow;
- (id)_buildChirpBtn;
- (id)_buildRecognizerBtn;
- (id)_songInfoAvailable;
- (void)_shakePanelButtonTapped:(id)arg1;
- (id)_pushVC:(id)arg1;
- (void)_showUnavailablePromptView;
- (BOOL)_checkIfShakeViewIsAvailable;
- (id)_animationGroupWithDuration:(double)arg1 forward:(BOOL)arg2;
- (void)_hideSharePanel:(CDUnknownBlockType)arg1;
- (void)_onNotifyStopRecordFinished:(id)arg1;
- (void)_prepareHidePanel:(int)arg1;
- (void)_showSharePanel;
- (id)_unavailablePromptView;
- (id)_shakePanelView;
- (void)_didShake:(id)arg1;
- (void)dismissAllBlockedViewsWithCompletion:(CDUnknownBlockType)arg1;
- (void)pushToQMChirrupVCWithSongInfo:(id)arg1;
- (void)hideSharePanel;
- (void)doHandlePushComming:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

