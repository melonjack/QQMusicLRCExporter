//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class QLLiveProgramItem, UIImageView;

@interface HVMPRightLiveProgramCell : UITableViewCell
{
    UIImageView *programIconView;
    UIImageView *vLineViewTop;
    UIImageView *vLineViewBottom;
    BOOL _hideTopLine;
    BOOL _hideBottomLine;
    BOOL _hideIcon;
    QLLiveProgramItem *_programItem;
}

+ (float)cellHeight;
@property(nonatomic) BOOL hideIcon; // @synthesize hideIcon=_hideIcon;
@property(nonatomic) BOOL hideBottomLine; // @synthesize hideBottomLine=_hideBottomLine;
@property(nonatomic) BOOL hideTopLine; // @synthesize hideTopLine=_hideTopLine;
@property(retain, nonatomic) QLLiveProgramItem *programItem; // @synthesize programItem=_programItem;
- (void)dealloc;
- (void)setPlayState:(unsigned int)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

