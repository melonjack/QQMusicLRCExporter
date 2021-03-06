//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class CATextLayer, UIColor;

__attribute__((visibility("hidden")))
@interface MTAnimatedLabel : UILabel
{
    float _animationDuration;
    float _gradientWidth;
    UIColor *_tint;
    CATextLayer *_textLayer;
}

+ (int)UITextAlignmentFromCAAlignment:(id)arg1;
+ (id)CAAlignmentFromUITextAlignment:(int)arg1;
+ (Class)layerClass;
@property(retain, nonatomic) CATextLayer *textLayer; // @synthesize textLayer=_textLayer;
@property(retain, nonatomic) UIColor *tint; // @synthesize tint=_tint;
@property(nonatomic) float gradientWidth; // @synthesize gradientWidth=_gradientWidth;
@property(nonatomic) float animationDuration; // @synthesize animationDuration=_animationDuration;
- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setTextAlignment:(int)arg1;
- (int)textAlignment;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFont:(id)arg1;
- (id)font;
- (void)setText:(id)arg1;
- (id)text;
- (void)setTextColor:(id)arg1;
- (id)textColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initializeLayers;

@end

