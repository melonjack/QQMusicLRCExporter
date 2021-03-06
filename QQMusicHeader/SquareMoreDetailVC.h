//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController.h"

#import "QMChannelInteractiveProtocol.h"

@class CategoricalSongFolderListItem, ChannelV4CategorySort, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SquareMoreDetailVC : SkinViewController <QMChannelInteractiveProtocol>
{
    BOOL _loadingMore;
    ChannelV4CategorySort *_categorySort;
    NSString *_notificationKey;
    CategoricalSongFolderListItem *_listItem;
    NSMutableArray *_tableArray;
    int *_fromVCType;
}

@property(nonatomic) int *fromVCType; // @synthesize fromVCType=_fromVCType;
@property(retain, nonatomic) NSMutableArray *tableArray; // @synthesize tableArray=_tableArray;
@property(nonatomic) BOOL loadingMore; // @synthesize loadingMore=_loadingMore;
@property(retain, nonatomic) CategoricalSongFolderListItem *listItem; // @synthesize listItem=_listItem;
@property(retain, nonatomic) NSString *notificationKey; // @synthesize notificationKey=_notificationKey;
@property(retain, nonatomic) ChannelV4CategorySort *categorySort; // @synthesize categorySort=_categorySort;
- (void).cxx_destruct;
- (void)requestToPlayChannel:(id)arg1;
- (void)requestToShowChannel:(id)arg1;
- (BOOL)moreDataIsLoading:(id)arg1;
- (void)processingLoadMoreAction:(id)arg1;
- (BOOL)hasMoreDataInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)_listItemDataDidUpdate:(id)arg1;
- (void)doneWithTableArray;
- (void)reFresh;
- (id)_notificationKey;
- (int)vcType;
- (void)loadView;
- (void)dealloc;
- (id)initWithFromVCType:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

