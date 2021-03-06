//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController.h"

#import "QMTableViewProtocol.h"
#import "TopicChannelCellDelegate.h"
#import "UITableViewDataSource.h"

@class ChannelItemKey, NSMutableDictionary, NSString, TopicChannelListItem, UIViewController;

__attribute__((visibility("hidden")))
@interface TopicChannelViewController : SkinViewController <UITableViewDataSource, TopicChannelCellDelegate, QMTableViewProtocol>
{
    BOOL _loadingMore;
    NSString *_jumpUrl;
    TopicChannelListItem *_topicChannelListItem;
    NSMutableDictionary *_cellHeights;
    ChannelItemKey *channelItemKey;
    UIViewController *_specifiedFromVC;
}

@property(retain, nonatomic) UIViewController *specifiedFromVC; // @synthesize specifiedFromVC=_specifiedFromVC;
@property(retain, nonatomic) ChannelItemKey *channelItemKey; // @synthesize channelItemKey;
@property(retain, nonatomic) NSMutableDictionary *cellHeights; // @synthesize cellHeights=_cellHeights;
@property(retain, nonatomic) TopicChannelListItem *topicChannelListItem; // @synthesize topicChannelListItem=_topicChannelListItem;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)onImagetWithInfo:(id)arg1 ImageFile:(id)arg2;
- (BOOL)moreDataIsLoading:(id)arg1;
- (void)processingLoadMoreAction:(id)arg1;
- (BOOL)hasMoreDataInTableView:(id)arg1;
- (void)TopicChannelCellPlayBtnTapped:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)_releaseUnvisibleImages;
- (void)_listDataDidUpdate:(id)arg1;
- (void)_showTableView:(BOOL)arg1;
- (int)vcType;
- (void)reFresh;
- (void)viewDidPop;
- (void)viewWillPop;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

