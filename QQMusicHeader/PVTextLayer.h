//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface PVTextLayer : UIView
{
    UIView *_titleContainerView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UIImageView *_titleBgMaskView;
    UILabel *_creatorLabel;
    UIImageView *_vipBadge;
    UILabel *_subscribeNumLabel;
}

- (void).cxx_destruct;
- (void)updateVipBadgeViewPosition;
- (void)updateTitleContainerViewPosition;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setTitleBackgroundImage:(id)arg1;
- (void)setIsVip:(BOOL)arg1;
- (void)setCreator:(id)arg1;
- (void)setFormattedSubscribeNumberText:(id)arg1;
- (void)setSubscribeNumber:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setIcon:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
