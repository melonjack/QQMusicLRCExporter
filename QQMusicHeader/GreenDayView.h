//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface GreenDayView : UIView
{
    UILabel *_dayLabel;
    UILabel *_expireLabel;
}

@property(retain, nonatomic) UILabel *expireLabel; // @synthesize expireLabel=_expireLabel;
@property(retain, nonatomic) UILabel *dayLabel; // @synthesize dayLabel=_dayLabel;
- (void).cxx_destruct;
- (void)setUpgradeDay:(int)arg1 expire:(id)arg2;
- (void)addAllSubviews;
- (id)createLabel:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
