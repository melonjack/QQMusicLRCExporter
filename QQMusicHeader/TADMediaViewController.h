//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TADLandingViewControllerDelegate.h"
#import "TADRemainViewDelegate.h"

@class NSArray, NSDate, NSString, TADLandingControlManager, TADLandingViewController, TADMediaItem, TADMediaLog, TADQLMediaPing, TADRemainView, TADReportDP3, TADReportMediaItemList, TADReportSingleMediaItem, TADUserInfo, UIButton, UINavigationController, UIView;

@interface TADMediaViewController : UIViewController <TADRemainViewDelegate, TADLandingViewControllerDelegate>
{
    BOOL _detailButtonVisible;
    BOOL _expandButtonVisible;
    BOOL _forbidAdUserToTouch;
    BOOL _presented;
    BOOL _needDetailButton;
    BOOL _allowDetailButton;
    BOOL _detailButtonInTime;
    BOOL _isLandingViewPresenting;
    BOOL _isLandingViewBeingPresented;
    BOOL _appInteractivePopEnabled;
    id <TADMediaViewControllerDelegate> _delegate;
    UINavigationController *_clientNavigationController;
    UIViewController *_clientViewController;
    TADMediaItem *_currentMediaItem;
    NSArray *_mediaItemArray;
    TADRemainView *_remainView;
    UIButton *_detailButton;
    UIButton *_expandButton;
    UIButton *_volumeButton;
    UIView *_tipView;
    TADLandingViewController *_landingViewController;
    NSDate *_dateOfCurrentMediaItemStartToPlay;
    NSDate *_dateOfAdStartToFirstBuffer;
    NSDate *_dateOfAdPlaybackLastStartToPause;
    NSDate *_dateOfLandingViewLastBeingOpened;
    TADLandingControlManager *_landingControlManager;
    TADReportSingleMediaItem *_mediaViewStat;
    TADReportMediaItemList *_mediaItemListReport;
    TADUserInfo *_userReport;
    TADReportDP3 *_dp3Report;
    TADMediaLog *_logService;
    TADQLMediaPing *_pingService;
    double _adPlaybackTimeLastRefreshed;
    double _adTotalDuration;
    double _adTotalDurationComplete;
    double _adMediaItemDurationFinished;
    double _durationOfAdPlaybackPaused;
    double _durationOfLandingViewPresented;
    double _timeOfLandingViewStartLoad;
    double _durationOfLandingViewLoading;
}

@property(retain, nonatomic) TADQLMediaPing *pingService; // @synthesize pingService=_pingService;
@property(retain, nonatomic) TADMediaLog *logService; // @synthesize logService=_logService;
@property(retain, nonatomic) TADReportDP3 *dp3Report; // @synthesize dp3Report=_dp3Report;
@property(retain, nonatomic) TADUserInfo *userReport; // @synthesize userReport=_userReport;
@property(retain, nonatomic) TADReportMediaItemList *mediaItemListReport; // @synthesize mediaItemListReport=_mediaItemListReport;
@property(retain, nonatomic) TADReportSingleMediaItem *mediaViewStat; // @synthesize mediaViewStat=_mediaViewStat;
@property(retain, nonatomic) TADLandingControlManager *landingControlManager; // @synthesize landingControlManager=_landingControlManager;
@property(nonatomic) double durationOfLandingViewLoading; // @synthesize durationOfLandingViewLoading=_durationOfLandingViewLoading;
@property(nonatomic) double timeOfLandingViewStartLoad; // @synthesize timeOfLandingViewStartLoad=_timeOfLandingViewStartLoad;
@property(nonatomic) double durationOfLandingViewPresented; // @synthesize durationOfLandingViewPresented=_durationOfLandingViewPresented;
@property(retain, nonatomic) NSDate *dateOfLandingViewLastBeingOpened; // @synthesize dateOfLandingViewLastBeingOpened=_dateOfLandingViewLastBeingOpened;
@property(nonatomic) double durationOfAdPlaybackPaused; // @synthesize durationOfAdPlaybackPaused=_durationOfAdPlaybackPaused;
@property(retain, nonatomic) NSDate *dateOfAdPlaybackLastStartToPause; // @synthesize dateOfAdPlaybackLastStartToPause=_dateOfAdPlaybackLastStartToPause;
@property(retain, nonatomic) NSDate *dateOfAdStartToFirstBuffer; // @synthesize dateOfAdStartToFirstBuffer=_dateOfAdStartToFirstBuffer;
@property(retain, nonatomic) NSDate *dateOfCurrentMediaItemStartToPlay; // @synthesize dateOfCurrentMediaItemStartToPlay=_dateOfCurrentMediaItemStartToPlay;
@property(nonatomic) double adMediaItemDurationFinished; // @synthesize adMediaItemDurationFinished=_adMediaItemDurationFinished;
@property(nonatomic) double adTotalDurationComplete; // @synthesize adTotalDurationComplete=_adTotalDurationComplete;
@property(nonatomic) double adTotalDuration; // @synthesize adTotalDuration=_adTotalDuration;
@property(nonatomic) double adPlaybackTimeLastRefreshed; // @synthesize adPlaybackTimeLastRefreshed=_adPlaybackTimeLastRefreshed;
@property(nonatomic) BOOL appInteractivePopEnabled; // @synthesize appInteractivePopEnabled=_appInteractivePopEnabled;
@property(nonatomic) BOOL isLandingViewBeingPresented; // @synthesize isLandingViewBeingPresented=_isLandingViewBeingPresented;
@property(nonatomic) BOOL isLandingViewPresenting; // @synthesize isLandingViewPresenting=_isLandingViewPresenting;
@property(nonatomic) BOOL detailButtonInTime; // @synthesize detailButtonInTime=_detailButtonInTime;
@property(nonatomic) BOOL allowDetailButton; // @synthesize allowDetailButton=_allowDetailButton;
@property(nonatomic) BOOL needDetailButton; // @synthesize needDetailButton=_needDetailButton;
@property(nonatomic) BOOL presented; // @synthesize presented=_presented;
@property(retain, nonatomic) TADLandingViewController *landingViewController; // @synthesize landingViewController=_landingViewController;
@property(retain, nonatomic) UIView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) UIButton *volumeButton; // @synthesize volumeButton=_volumeButton;
@property(retain, nonatomic) UIButton *expandButton; // @synthesize expandButton=_expandButton;
@property(retain, nonatomic) UIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) TADRemainView *remainView; // @synthesize remainView=_remainView;
@property(nonatomic) BOOL forbidAdUserToTouch; // @synthesize forbidAdUserToTouch=_forbidAdUserToTouch;
@property(nonatomic) BOOL expandButtonVisible; // @synthesize expandButtonVisible=_expandButtonVisible;
@property(nonatomic) BOOL detailButtonVisible; // @synthesize detailButtonVisible=_detailButtonVisible;
@property(retain, nonatomic) NSArray *mediaItemArray; // @synthesize mediaItemArray=_mediaItemArray;
@property(retain, nonatomic) TADMediaItem *currentMediaItem; // @synthesize currentMediaItem=_currentMediaItem;
@property(nonatomic) UIViewController *clientViewController; // @synthesize clientViewController=_clientViewController;
@property(nonatomic) UINavigationController *clientNavigationController; // @synthesize clientNavigationController=_clientNavigationController;
@property(nonatomic) id <TADMediaViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportCacheHits;
- (void)didVolumeButtonClick:(id)arg1;
- (BOOL)isMuted;
- (void)hideDetailButton;
- (void)showDetailButtonAnimated:(BOOL)arg1;
- (void)willRemoveFromClient;
- (BOOL)shouldLandingInBrowser;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)adLandingViewMindLinkClicked:(int)arg1;
- (void)adLandingViewRefreshUrl:(id)arg1;
- (void)adLandingViewDidFinishLoadingUrl:(id)arg1;
- (void)adLandingViewStartLoadingUrl:(id)arg1;
- (void)adLandingViewDidFinishLoad;
- (void)adLandingViewDidStartLoad;
- (void)adLandingViewDidDismiss;
- (void)adLandingViewWillDismiss;
- (void)adLandingViewDidAppear;
- (void)closeADLandingViewController:(BOOL)arg1;
- (void)closeADLandingViewController;
- (void)adRemainViewSkipTouched:(id)arg1;
- (void)resizeLandingViewController;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animationDidStart:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)removeLandingViewController;
- (void)addLandingViewController;
- (void)presentLandingViewController;
- (void)openLandingViewController;
- (void)didExpandButtonClick;
- (void)didDetailButtonClick;
- (void)adUserDidTouch:(id)arg1;
- (id)guessMediaItemByPlayedTime:(double)arg1;
- (void)refreshWithPlaybackState:(id)arg1 atTime:(double)arg2;
- (void)adMediaItemPlaybackDidFinish:(id)arg1;
- (void)adMediaItemIsPreparedToPlay:(id)arg1;
- (void)adPlaybackDidFinish:(id)arg1;
- (void)adPlaybackDidFail:(id)arg1;
- (void)adPlaybackDidSkip:(id)arg1;
- (void)adIsPreparedToPlay:(id)arg1;
- (void)adBufferingDidFinish:(id)arg1;
- (void)adBufferingDidFail:(id)arg1;
- (void)adBufferingDidStart:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)cacheHitReport;
- (void)viewDidAppear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

