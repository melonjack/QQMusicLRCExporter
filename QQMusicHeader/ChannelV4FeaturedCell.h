//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChannelV4Cell.h"

#import "ImageManagerDelegate.h"

@class NSString, UIButton, UIButtonWithUserInfo, UIImageView, UIImageViewWithUserInfo, UILabel;

__attribute__((visibility("hidden")))
@interface ChannelV4FeaturedCell : ChannelV4Cell <ImageManagerDelegate>
{
    UIButton *_clickArea;
    UIImageView *_defaultImageView;
    UIButtonWithUserInfo *_channelImageView;
    UIImageViewWithUserInfo *_badgeImageView;
    UILabel *_mainTitle;
    UILabel *_mainSubtitle;
    UILabel *_secondTitle;
    UIImageView *_arrowImageView;
}

+ (float)cellHeightWithRowData:(id)arg1;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *secondTitle; // @synthesize secondTitle=_secondTitle;
@property(retain, nonatomic) UILabel *mainSubtitle; // @synthesize mainSubtitle=_mainSubtitle;
@property(retain, nonatomic) UILabel *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(retain, nonatomic) UIImageViewWithUserInfo *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
@property(retain, nonatomic) UIButtonWithUserInfo *channelImageView; // @synthesize channelImageView=_channelImageView;
@property(retain, nonatomic) UIImageView *defaultImageView; // @synthesize defaultImageView=_defaultImageView;
@property(retain, nonatomic) UIButton *clickArea; // @synthesize clickArea=_clickArea;
- (void).cxx_destruct;
- (void)onNotifySkinSettingChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)trimImage:(id)arg1;
- (void)onImagetWithInfo:(id)arg1 ImageFile:(id)arg2;
- (id)defaultImage;
- (void)onNotifyColorStyleChanged:(id)arg1;
- (void)didClick;
- (void)updateUI;
- (id)publishingData;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
