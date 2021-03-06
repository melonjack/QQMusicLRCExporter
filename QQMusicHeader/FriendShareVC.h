//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController.h"

#import "EGORefreshTableHeaderDelegate.h"
#import "ListTagDelegate.h"
#import "QMChannelInteractiveProtocol.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class EGORefreshTableHeaderView, FriendShareData, NSString;

__attribute__((visibility("hidden")))
@interface FriendShareVC : SkinViewController <UITableViewDataSource, UITableViewDelegate, QMChannelInteractiveProtocol, ListTagDelegate, EGORefreshTableHeaderDelegate>
{
    BOOL _reloading;
    BOOL _loadingMore;
    BOOL _bScrolling;
    EGORefreshTableHeaderView *_refreshHeaderView;
    FriendShareData *_selData;
    int _selIndex;
}

@property(nonatomic) int selIndex; // @synthesize selIndex=_selIndex;
@property(retain, nonatomic) FriendShareData *selData; // @synthesize selData=_selData;
@property(retain, nonatomic) EGORefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
- (void).cxx_destruct;
- (BOOL)isPlayingThisData:(id)arg1;
- (void)playOrPauseWithData:(id)arg1 withIndex:(int)arg2;
- (unsigned int)getPlayingIndexByList:(id)arg1;
- (int)getPlayStateByData:(id)arg1 withIndex:(int)arg2;
- (BOOL)isPlayingByData:(id)arg1 withIndex:(int)arg2;
- (void)doClickCreatorView:(id)arg1;
- (void)onNotifyShareSuccess:(id)arg1;
- (void)requestToShareChanne:(id)arg1 withIndex:(int)arg2;
- (void)reportLoveSong:(id)arg1;
- (void)_showMessageWhileDone:(id)arg1;
- (void)requestToLoveChanne:(id)arg1 withIndex:(int)arg2;
- (void)requestToShowMoreWithCategoryChannelData:(id)arg1;
- (void)requestToShowMore:(id)arg1;
- (void)requestToPlayChannel:(id)arg1;
- (void)requestToShowChannel:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)indexOfNowPlayingData;
- (int)getCurrentPlayState;
- (int)indexOfPlayingFriend:(id)arg1;
- (void)onNotifyPlayStateChange:(id)arg1;
- (void)onList:(id)arg1 WithResult:(int)arg2 AndAct:(id)arg3;
- (id)emptyViewText;
- (void)didReceiveMemoryWarning;
- (BOOL)moreDataIsLoading:(id)arg1;
- (void)processingLoadMoreAction:(id)arg1;
- (BOOL)hasMoreDataInTableView:(id)arg1;
- (id)egoRefreshTableHeaderDataSourceLastUpdated:(id)arg1;
- (BOOL)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (struct UIEdgeInsets)getScrollViewOriginOffset;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)doneLoadingTableViewData;
- (void)reloadTableViewDataSource;
- (int)vcType;
- (void)reFresh;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

