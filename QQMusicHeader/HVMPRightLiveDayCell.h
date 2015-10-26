//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSDate, UIImageView;

@interface HVMPRightLiveDayCell : UITableViewCell
{
    UIImageView *dateIconView;
    UIImageView *dateBackgroundView;
    UIImageView *vLineViewTop;
    UIImageView *vLineViewBottom;
    BOOL _hideTopLine;
    BOOL _hideBottomLine;
    NSDate *_programDate;
}

+ (float)cellHeight;
@property(nonatomic) BOOL hideBottomLine; // @synthesize hideBottomLine=_hideBottomLine;
@property(nonatomic) BOOL hideTopLine; // @synthesize hideTopLine=_hideTopLine;
@property(retain, nonatomic) NSDate *programDate; // @synthesize programDate=_programDate;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
