//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, UIScrollView;

__attribute__((visibility("hidden")))
@interface QMDiscoverSongsDetailScrollView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    struct _NSRange _visibleIndexes;
    BOOL _isPendingScrolledPageUpdateNotification;
    id <QMDiscoverSongsDetailScrollViewDataSource> _dataSource;
    id <QMDiscoverSongsDetailScrollViewDelegate> _delegate;
    NSMutableArray *__visibleViews;
    NSMutableDictionary *__reusableViews;
    UIView *__selectedView;
    int _numberOfViews;
    UIScrollView *_scrollView;
    UIView *_dimView;
    UIView *_bgImageView;
}

@property(retain, nonatomic) UIView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIView *dimView; // @synthesize dimView=_dimView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) int numberOfViews; // @synthesize numberOfViews=_numberOfViews;
@property(retain, nonatomic) UIView *_selectedView; // @synthesize _selectedView=__selectedView;
@property(retain, nonatomic) NSMutableDictionary *_reusableViews; // @synthesize _reusableViews=__reusableViews;
@property(retain, nonatomic) NSMutableArray *_visibleViews; // @synthesize _visibleViews=__visibleViews;
@property(nonatomic) __weak id <QMDiscoverSongsDetailScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <QMDiscoverSongsDetailScrollViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showFrostedGlass;
- (void)hideFrostedGlass;
- (id)dequeueReusablePageWithIdentifier:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleTapGestureFrom:(id)arg1;
- (void)setTransform:(float)arg1 forObstructionLayerOfPage:(id)arg2;
- (void)setTransformForPage:(id)arg1;
- (void)setAlphaForPage:(id)arg1;
- (void)setFrameForView:(id)arg1 atIndex:(int)arg2;
- (void)updateSelectedView:(int)arg1;
- (void)updateScrolledPage:(id)arg1 index:(int)arg2;
- (void)updateVisiblePages;
- (void)addViewToScrollView:(id)arg1 atIndex:(int)arg2;
- (id)loadViewAtIndex:(int)arg1 insertIntoVisibleIndex:(int)arg2;
- (void)animationDismiss;
- (void)animationShow;
- (void)scrollToPageAtIndex:(int)arg1 animated:(BOOL)arg2;
- (void)reloadData:(int)arg1;
- (void)reloadData;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andViewsCount:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

