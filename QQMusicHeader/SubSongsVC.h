//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController.h"

#import "DownLoadEditProtocol.h"
#import "IndexViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"

@class ClusterInfo, NSIndexPath, NSString;

__attribute__((visibility("hidden")))
@interface SubSongsVC : SkinViewController <UITableViewDataSource, IndexViewDelegate, UIScrollViewDelegate, DownLoadEditProtocol>
{
    int songsListTag;
    id <SubSongsVCDelegate> deletgate;
    BOOL bLoadIpodSong;
    ClusterInfo *clusterInfo;
    NSIndexPath *tableCellSelectIndexPath;
}

@property(retain) ClusterInfo *clusterInfo; // @synthesize clusterInfo;
@property(nonatomic) __weak id <SubSongsVCDelegate> deletgate; // @synthesize deletgate;
@property(nonatomic) int songsListTag; // @synthesize songsListTag;
@property(nonatomic) BOOL bLoadIpodSong; // @synthesize bLoadIpodSong;
- (void).cxx_destruct;
- (void)onNotifyQPlayModeChanged:(id)arg1;
- (void)onColorStyleChanged;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onIndexTouchupInside:(struct CGPoint)arg1;
- (void)onIndexChanged:(id)arg1;
- (void)delayToReturn;
- (void)cancelAllRequest;
- (void)onNotifyUpdateAllFinish:(id)arg1;
- (void)onNotifyLoadIpodSongsFinish:(id)arg1;
- (void)onNotifyPlayErrorOnLocalFiles:(id)arg1;
- (void)delObject:(id)arg1;
- (void)onEditDone:(id)arg1 deletedObjects:(id)arg2 withDeleteBlock:(CDUnknownBlockType)arg3;
- (void)onSongsEdit:(id)arg1;
- (void)handleCellLongPress:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)emptyViewText;
- (id)loadingViewText;
- (BOOL)showDelBtnInActionSheet:(id)arg1;
- (int)vcType;
- (void)reFresh;
- (void)removeRandomButtonInHeader:(id)arg1;
- (void)addRandomButtonInHeader:(id)arg1;
- (void)handleBatchAction:(int)arg1;
- (void)dealloc;
- (void)viewDidPop;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
