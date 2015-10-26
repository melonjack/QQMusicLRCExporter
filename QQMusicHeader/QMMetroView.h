//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QMMetroItemViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, NSTimer, QMFocusScrollView, QMMetroItemView, QMPageControl, UIButton, UIGestureRecognizer, UIImageView, UIScrollView;

__attribute__((visibility("hidden")))
@interface QMMetroView : UIView <UIGestureRecognizerDelegate, QMMetroItemViewDelegate, UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    UIButton *_addButton;
    UIImageView *_addButtonScalingMaskImg;
    QMPageControl *_pageCtrl;
    UIImageView *_leftSideShadowLine;
    UIImageView *_rightSideShadowLine;
    UIView *_leftSideBgView;
    UIView *_rightSideBgView;
    BOOL _editing;
    QMFocusScrollView *_focusScrollView;
    id <QMMetroViewDataSource> qmDataSource;
    id <QMMetroViewDelegate> qmDelegate;
    NSMutableArray *_metroItemViews;
    NSTimer *_switchDetectTimer;
    QMMetroItemView *_movingMetroItem;
    QMMetroItemView *_movingItem;
    UIGestureRecognizer *_movingRecognizer;
}

@property(retain, nonatomic) UIGestureRecognizer *movingRecognizer; // @synthesize movingRecognizer=_movingRecognizer;
@property(retain, nonatomic) QMMetroItemView *movingItem; // @synthesize movingItem=_movingItem;
@property(retain, nonatomic) QMMetroItemView *movingMetroItem; // @synthesize movingMetroItem=_movingMetroItem;
@property(retain, nonatomic) NSTimer *switchDetectTimer; // @synthesize switchDetectTimer=_switchDetectTimer;
@property(retain, nonatomic) NSMutableArray *metroItemViews; // @synthesize metroItemViews=_metroItemViews;
@property(nonatomic) __weak id <QMMetroViewDelegate> qmDelegate; // @synthesize qmDelegate;
@property(nonatomic) __weak id <QMMetroViewDataSource> qmDataSource; // @synthesize qmDataSource;
@property(readonly, nonatomic) BOOL editing; // @synthesize editing=_editing;
@property(retain, nonatomic) QMFocusScrollView *focusScrollView; // @synthesize focusScrollView=_focusScrollView;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)metroItem:(id)arg1 didEndMoved:(id)arg2;
- (void)metroItem:(id)arg1 didMoved:(id)arg2 touchPointInItemView:(struct CGPoint)arg3;
- (void)metroItemDidEnterEditingMode:(id)arg1;
- (void)metroItemDidTappedOnPlayBtn:(id)arg1;
- (void)metroItemDidTappedOnDeleteBtn:(id)arg1;
- (void)metroItemDidTappedOnImage:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_onNotifyColorStyleChanged:(id)arg1;
- (void)_switchToNextPage;
- (void)_switchToPrevPage;
- (BOOL)_checkSwitchPageEvents:(struct CGPoint)arg1;
- (void)_resetAddButtonPosition:(BOOL)arg1;
- (void)_exchangeItemAtIndex:(int)arg1 withItemAtIndex:(int)arg2;
- (int)_indexOfLocation:(struct CGPoint)arg1;
- (void)_rearrangeAffectedItems:(int)arg1 locatedItemIndex:(int)arg2;
- (void)_addButtonTapped:(id)arg1;
- (void)_scrollToLastPage;
- (void)_updateScrollViewContentSize;
- (struct CGRect)_frameForItemAtIndex:(int)arg1;
- (int)_maxItemCount;
- (struct CGSize)_metroItemSize;
- (void)_tappedOnEmptySpace:(id)arg1;
- (void)_changeFocusViewToEditMode:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGRect)_focusViewFrame;
- (float)_pageCtlHeight;
- (float)_viewSpacingY;
- (void)enableEdtingMode:(BOOL)arg1;
- (BOOL)reachMaxLimited;
- (void)reloadDataAtIndex:(int)arg1;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
