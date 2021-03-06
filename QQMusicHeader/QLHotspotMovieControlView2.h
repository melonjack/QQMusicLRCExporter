//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLMovieBaseControlView.h"

@class HVMPFavoritebutton, QLPlayerSliderView, UIButton, UIImageView, UILabel, UIView;

@interface QLHotspotMovieControlView2 : QLMovieBaseControlView
{
    QLPlayerSliderView *_sliderView;
    UIView *_bottomView;
    UIImageView *_imgLine;
    UIImageView *_rightImgLine;
    UILabel *_lblLeftTime;
    UILabel *_lblRightTime;
    UIButton *_btnPlay;
    BOOL _isPlaying;
    BOOL _isCommingLiveModel;
    BOOL _isFavorite;
    HVMPFavoritebutton *_btnFavorite;
    UIButton *_btnFullscreen;
    UIButton *_btnDownload;
    double _jumpEndTime;
}

@property double jumpEndTime; // @synthesize jumpEndTime=_jumpEndTime;
@property(readonly, retain, nonatomic) UIButton *btnDownload; // @synthesize btnDownload=_btnDownload;
@property(readonly, retain, nonatomic) UIButton *btnFullscreen; // @synthesize btnFullscreen=_btnFullscreen;
@property(readonly, retain, nonatomic) HVMPFavoritebutton *btnFavorite; // @synthesize btnFavorite=_btnFavorite;
@property(readonly) BOOL isFavorite; // @synthesize isFavorite=_isFavorite;
@property BOOL isPlaying; // @synthesize isPlaying=_isPlaying;
- (float)screenWidth;
- (void)pushUnicomDetailViewController:(id)arg1;
- (void)showUnicomTips;
- (void)stopHotspotPlay;
- (void)startHotspotPlay;
@property BOOL isCommingLiveModel; // @synthesize isCommingLiveModel=_isCommingLiveModel;
- (void)didSingleTap:(id)arg1;
- (void)disableGesture;
- (void)enableGesture;
- (void)setPanGesture;
- (void)hideAllControlViews;
- (void)showAllControlViews;
- (void)layoutSubviews;
- (void)circleEnd;
- (void)circleMinus:(float)arg1;
- (void)circlePlus:(float)arg1;
- (void)circleBegin:(BOOL)arg1;
- (void)controlEnableState:(BOOL)arg1 withMask:(int)arg2;
- (void)changePlayButtonImageAndStatus:(BOOL)arg1;
- (void)controlMoviePlayStatusWithUser:(BOOL)arg1;
- (void)controlShowPrompt:(BOOL)arg1 withModifyPlayButton:(BOOL)arg2;
- (void)modifyPlayButtonToPause;
- (void)modifyPlayButtonToPLay;
- (void)performPlayAction;
- (void)setControlsEnabled:(BOOL)arg1;
- (void)showPreloading:(BOOL)arg1 tips:(id)arg2;
- (BOOL)cachingPromptEnabled;
- (void)playerLoadstateChanged:(int)arg1 videoType:(int)arg2 firstPlay:(BOOL)arg3;
- (void)flushPlayerProgress;
- (void)setJumpEndTimeLength:(double)arg1;
- (void)playBtnClicked:(id)arg1;
- (void)editFavorite:(id)arg1;
- (void)downloadClicked:(id)arg1;
- (void)fullscreenClicked:(id)arg1;
- (void)backClicked:(id)arg1;
- (void)flushInterfaceWithMainCtl:(id)arg1 withLastCtl:(id)arg2;
- (void)setVideoTitle:(id)arg1;
- (id)createBtnImgName:(id)arg1 edge:(struct CGSize)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)pageDescription;
- (id)sliderView;
- (void)clearResources;
- (void)dealloc;

@end

