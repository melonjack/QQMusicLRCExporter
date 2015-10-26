//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QLBanabaSwitchButtonDelegate.h"
#import "QLInteractiveVoteSwithDelegate.h"

@class MPVolumeView, NSString, QLBadgeViewEx, QLMovieBaseControlView, UIButton, UILabel;

@interface HVMPTopView2 : UIView <QLInteractiveVoteSwithDelegate, QLBanabaSwitchButtonDelegate>
{
    UIView *_topBackgroundView;
    UIButton *_backButton;
    UILabel *_titleLabel;
    UIButton *_airplayButton;
    MPVolumeView *_airplayView;
    MPVolumeView *_airplayView2;
    UIButton *_dlnaButton;
    UIButton *_momentButton;
    UIButton *_moreButton;
    UILabel *_titleTagLabel;
    BOOL _momentBtnHidden;
    BOOL _remotePlayDisabled;
    NSString *_remotePlayDisableReason;
    QLBadgeViewEx *_unreadNumIcon;
    UIButton *_interactiveVoteButton;
    UIButton *_banabaSwitchButton;
    QLMovieBaseControlView *_mainCtlView;
}

@property QLMovieBaseControlView *mainCtlView; // @synthesize mainCtlView=_mainCtlView;
@property(retain, nonatomic) UIButton *banabaSwitchButton; // @synthesize banabaSwitchButton=_banabaSwitchButton;
@property(retain, nonatomic) UIButton *interactiveVoteButton; // @synthesize interactiveVoteButton=_interactiveVoteButton;
@property(retain, nonatomic) QLBadgeViewEx *unreadNumIcon; // @synthesize unreadNumIcon=_unreadNumIcon;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)interactiveSwitchISOpen:(BOOL)arg1;
- (void)updateInteractiveVoteSwith:(int)arg1;
- (void)banabaSwitchButtonActionByUIControlEventTouchUpInside:(id)arg1;
- (void)updateBanabaSwitchButtonState:(BOOL)arg1;
- (void)showBanabaSwitchButton:(BOOL)arg1;
- (void)refreshFuncItems;
- (void)disableRemotePlayWithReason:(id)arg1;
- (void)enableRemotePlay;
- (void)clearResources;
- (void)showDLNAButton:(BOOL)arg1;
- (void)enableDLNAButton:(BOOL)arg1;
- (void)hideMomentButton:(BOOL)arg1;
- (void)setTitle:(id)arg1 tag:(id)arg2;
- (void)checkAirplayShow;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)moreBtnClicked:(id)arg1;
- (void)momentBtnClicked:(id)arg1;
- (void)dlnaBtnClicked:(id)arg1;
- (void)airplayBtnClicked:(id)arg1;
- (void)backBtnClicked:(id)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
