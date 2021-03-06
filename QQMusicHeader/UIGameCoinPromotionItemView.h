//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UIImage;

@interface UIGameCoinPromotionItemView : UIView
{
    UIImage *_coinImg;
    int _orientation;
    BOOL _bExpand;
    NSMutableArray *_propLabels;
    NSMutableArray *_gamePropStrings;
    BOOL _fixedWidth;
    float _maxPropLabelWidth;
    id <UIGameCoinItemViewDelegate> _delegate;
}

@property(retain, nonatomic) NSArray *gamePropStrings; // @synthesize gamePropStrings=_gamePropStrings;
@property(retain, nonatomic) UIImage *coinImg; // @synthesize coinImg=_coinImg;
@property(nonatomic) id <UIGameCoinItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getRMBInYuan:(id)arg1;
- (id)dividePropertyString:(id)arg1;
- (void)onTapGesture:(id)arg1;
- (BOOL)getExpand;
- (void)setExpand:(BOOL)arg1;
- (void)layoutSubviews;
- (void)initAllControls;
- (struct CGSize)calcViewSize;
- (void)setFixedWidth:(float)arg1;
- (BOOL)hasPromotion;
- (void)setOrientation:(int)arg1;
- (void)setGameProperty:(id)arg1;
- (void)setSendExt:(id)arg1;
- (void)setRealCurrencyPrice:(id)arg1;
- (void)setCoinCount:(id)arg1 extraCoinCount:(id)arg2;
- (id)initWithCoinImg:(id)arg1 orientation:(int)arg2;
- (void)dealloc;

@end

