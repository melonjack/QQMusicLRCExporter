//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMusicCell.h"

@class QMLabel;

__attribute__((visibility("hidden")))
@interface TitleCell : QQMusicCell
{
    QMLabel *_title;
}

@property(retain) QMLabel *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)onNotifySkinSettingChange:(id)arg1;
- (float)fontSize;
- (int)qmCellType;
- (void)updateTitle:(id)arg1;
- (void)layoutSubviews;
- (void)buildSubViews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

