//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMusicCell.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface FriendListenExpandCell : QQMusicCell
{
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)onNotifySkinSettingChange:(id)arg1;
- (float)fontSize;
- (BOOL)showArrow;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

