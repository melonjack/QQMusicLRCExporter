//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QMRootTabBarVC.h"

#import "OnLineSearchResultDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITextFieldDelegate.h"

@class DiscoverRootViewController, MyMusicRootViewController, NSArray, NSMutableArray, NSMutableSet, NSString, OnLineSearchViewController, QMMoreVC, SkinViewController, UIScrollView;

__attribute__((visibility("hidden")))
@interface QMRootTopTabBarVC : QMRootTabBarVC <UIScrollViewDelegate, UITextFieldDelegate, OnLineSearchResultDelegate>
{
    UIScrollView *mainHeaderTabScrollView;
    NSArray *mainHeaderTabComponents;
    MyMusicRootViewController *myMusicRootVC;
    SkinViewController *channelRootVC;
    DiscoverRootViewController *discoverRootVC;
    QMMoreVC *moreVC;
    NSMutableSet *setRedPointReason;
    NSMutableArray *arrayYellowPoint;
    OnLineSearchViewController *_onLineSearchVC;
    int _currentShowTabIndex;
}

@property(nonatomic) int currentShowTabIndex; // @synthesize currentShowTabIndex=_currentShowTabIndex;
@property(retain, nonatomic) OnLineSearchViewController *onLineSearchVC; // @synthesize onLineSearchVC=_onLineSearchVC;
@property(retain, nonatomic) NSMutableArray *arrayYellowPoint; // @synthesize arrayYellowPoint;
@property(retain, nonatomic) NSMutableSet *setRedPointReason; // @synthesize setRedPointReason;
- (void).cxx_destruct;
- (id)strVCtype;
- (BOOL)shouldShowRedPointOnMoreTabButtnon;
- (void)makeMoreBecomeFirstResponser;
- (id)buildYellowPointAtTabIndex:(int)arg1;
- (void)showYellowPoint:(int)arg1 visiable:(BOOL)arg2;
- (BOOL)shouldShowTipsOnMyMusicTab;
- (void)updateReqSongNumInMoreVC;
- (void)removeRedPointReason:(int)arg1;
- (void)addRedPointReason:(int)arg1;
- (void)firstTimeUpdateRedPoint;
- (void)fillRedPointReason;
- (int)getTabIndexByRedPointReason:(int)arg1;
- (void)updateTabRedPointByAdd:(BOOL)arg1 tabIndex:(int)arg2;
- (BOOL)hasRedPointReasonAtTab:(int)arg1;
- (void)onNotifyShowDownloadQualityPrompt:(id)arg1;
- (void)onNotifyShowAutoSaveConditionNet:(id)arg1;
- (void)onNotifySystemFolderRedpointReasonGone:(id)arg1;
- (void)onNotifyUserFolderRedpointReasonGone:(id)arg1;
- (void)onNotifyAddRedPointReasonMyMusicNewLove:(id)arg1;
- (void)onNotifyUpdateRequestSongFinished:(id)arg1;
- (void)onNotifyKSongUpdate:(id)arg1;
- (void)onNotifyNewForMeInfo:(id)arg1;
- (void)searchViewControllerDidDissappear;
- (void)updateDownloadCell:(id)arg1;
- (void)setForbidden:(id)arg1;
- (void)onMainTabMoreButtonClicked:(id)arg1;
- (void)onSearchAllButtonClicked:(id)arg1;
- (void)setTabBarButtonState:(int)arg1;
- (void)buttonClickReport;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)goSquareCategoryVC:(int)arg1 andName:(id)arg2;
- (void)goMusicHall:(unsigned int)arg1 categoryDic:(id)arg2;
- (void)loadTabViewAtIndex:(int)arg1;
- (void)selectedItem:(id)arg1 atIndex:(unsigned int)arg2;
- (void)touchDown:(id)arg1 itemAtIndex:(unsigned int)arg2;
- (void)touchUpInside:(id)arg1 itemAtIndex:(unsigned int)arg2;
- (id)selectedImageView:(id)arg1;
- (id)selectetdItemImage:(id)arg1 atIndex:(unsigned int)arg2;
- (id)imageFor:(id)arg1 atIndex:(unsigned int)arg2;
- (id)accessibilityLabel:(id)arg1 atIndex:(unsigned int)arg2;
- (Class)channelRootVCClass;
- (void)buildHeadTabBar;
- (id)getTabComponents;
- (void)onNotifyLoginSuccess:(id)arg1;
- (void)viewDidPop;
- (void)loadView;
- (void)loadContent;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

