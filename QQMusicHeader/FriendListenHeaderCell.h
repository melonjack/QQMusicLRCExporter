//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMusicCell.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface FriendListenHeaderCell : QQMusicCell
{
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
}

@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (float)fontSize;
- (int)qmCellType;
- (BOOL)showArrow;
- (void)onNotifySkinSettingChange:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

