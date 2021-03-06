//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ChannelLayoutCellScrollView : UIScrollView <UIScrollViewDelegate>
{
    struct CGPoint _targetScrollOffSet;
    id <ChannelLayoutCellScrollViewDelegate> _clDelegate;
    NSMutableArray *_reusedChannelCells;
    NSMutableDictionary *_cellPositions;
    NSMutableDictionary *_dataLoadingStatus;
    NSArray *_lastVisiblCellIndexs;
}

@property(retain, nonatomic) NSArray *lastVisiblCellIndexs; // @synthesize lastVisiblCellIndexs=_lastVisiblCellIndexs;
@property(retain, nonatomic) NSMutableDictionary *dataLoadingStatus; // @synthesize dataLoadingStatus=_dataLoadingStatus;
@property(retain, nonatomic) NSMutableDictionary *cellPositions; // @synthesize cellPositions=_cellPositions;
@property(retain, nonatomic) NSMutableArray *reusedChannelCells; // @synthesize reusedChannelCells=_reusedChannelCells;
@property(nonatomic) __weak id <ChannelLayoutCellScrollViewDelegate> clDelegate; // @synthesize clDelegate=_clDelegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)needsPreload;
- (void)_reloadVisibleCells;
- (id)_visibleCellIndexs;
- (BOOL)_dataIsLoadedAtIndex:(int)arg1;
- (void)_markDataIsLoadedAtIndex:(int)arg1;
- (void)_updateContentSize;
- (void)_composeCellWithDataAtIndex:(int)arg1;
- (id)_dequeueReusableCellAtIndex:(int)arg1;
- (id)_buildCellWithIndex:(int)arg1 withFrame:(struct CGRect)arg2;
- (struct CGRect)_frameForCellAtIndex:(int)arg1;
- (int)currentCellIndex;
- (void)reloadDataAtIndex:(int)arg1;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1 clDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

