//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController.h"

#import "ImageManagerDelegate.h"
#import "QMFocusScrollViewDelegate.h"
#import "QMMetroViewDataSource.h"
#import "QMMetroViewDelegate.h"

@class NSString, QMFocusScrollView, QMMetroView;

__attribute__((visibility("hidden")))
@interface ChannelRootViewController_V1 : SkinViewController <ImageManagerDelegate, QMFocusScrollViewDelegate, QMMetroViewDelegate, QMMetroViewDataSource>
{
    BOOL _listOrderChanged;
    QMFocusScrollView *_focusScrollView;
    QMMetroView *_metroView;
}

@property(retain, nonatomic) QMMetroView *metroView; // @synthesize metroView=_metroView;
@property(retain, nonatomic) QMFocusScrollView *focusScrollView; // @synthesize focusScrollView=_focusScrollView;
- (void).cxx_destruct;
- (void)QMFocusScrollView:(id)arg1 longPressed:(id)arg2;
- (void)QMFocusScrollView:(id)arg1 didSelectItem:(id)arg2;
- (void)QMMetroViewDidTapOnAddButton:(id)arg1;
- (void)QMMetroViewDidReachMaxLimited:(id)arg1;
- (void)QMMetroViewDidEndEditing:(id)arg1;
- (void)QMMetroViewDidBeginEditing:(id)arg1;
- (void)QMMetroView:(id)arg1 handlePlayActionAtIndex:(int)arg2;
- (void)QMMetroView:(id)arg1 handleDeleteActionAtIndex:(int)arg2;
- (void)QMMetroViewDidTapOnEmptySpace:(id)arg1;
- (void)QMMetroView:(id)arg1 didTapOnItemAtIndex:(int)arg2;
- (void)QMMetroView:(id)arg1 exchangeItemAtIndex:(int)arg2 withItemAtIndex:(int)arg3;
- (BOOL)QMMetroView:(id)arg1 canMoveItemAtIndex:(int)arg2;
- (BOOL)QMMetroView:(id)arg1 canDeleteItemAtIndex:(int)arg2;
- (id)QMMetroView:(id)arg1 titleForItemAtIndex:(int)arg2;
- (id)QMMetroView:(id)arg1 titleBgImageForItemAtIndex:(int)arg2;
- (id)QMMetroView:(id)arg1 playIconForItemAtIndex:(int)arg2;
- (id)QMMetroView:(id)arg1 iconForItemAtIndex:(int)arg2;
- (id)QMMetroView:(id)arg1 imageForItemAtIndex:(int)arg2;
- (int)numberOfItemsInQMMetroView:(id)arg1;
- (void)onImagetWithInfo:(id)arg1 ImageFile:(id)arg2;
- (void)_appDidEnterBackground;
- (void)_firstSubscribe;
- (void)_serverChanged;
- (void)_loginFailed;
- (void)_logout;
- (void)_loginSuccess;
- (id)_subscribedChannelList;
- (void)_subscribedChannelsDidUpdate:(id)arg1;
- (void)_loadImage;
- (void)_showMetroView:(BOOL)arg1;
- (void)channelAlertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)handleExpiredChannel:(id)arg1;
- (int)vcType;
- (void)reFresh;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)isNeedAddBottomLine;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
