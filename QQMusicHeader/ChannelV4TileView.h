//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "ImageManagerDelegate.h"
#import "QMCreatorViewDelegate.h"

@class ChannelItem, NSString, QMCreatorView, UIActivityIndicatorView, UIButtonWithUserInfo, UIImageView, UIImageViewWithUserInfo, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface ChannelV4TileView : UIControl <QMCreatorViewDelegate, ImageManagerDelegate>
{
    BOOL _shouldReloadImage;
    ChannelItem *_item;
    float _realHeight;
    id _actionTarget;
    SEL _action;
    UIImageView *_defaultImageView;
    UIButtonWithUserInfo *_imageButton;
    UIImageViewWithUserInfo *_badgeImageView;
    UIImageView *_listenIconImageView;
    UILabel *_listenNumLabel;
    UIImageView *_djImageView;
    UILabel *_titleLabel;
    QMCreatorView *_creatorView;
    UIActivityIndicatorView *_loadingIndiView;
    UIImageView *_nowplayingImgView;
    UILabel *_dujiaLabel;
    UIView *_bottomArea;
    UIView *_maskBgView;
}

@property(retain, nonatomic) UIView *maskBgView; // @synthesize maskBgView=_maskBgView;
@property(retain, nonatomic) UIView *bottomArea; // @synthesize bottomArea=_bottomArea;
@property(retain, nonatomic) UILabel *dujiaLabel; // @synthesize dujiaLabel=_dujiaLabel;
@property(retain, nonatomic) UIImageView *nowplayingImgView; // @synthesize nowplayingImgView=_nowplayingImgView;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndiView; // @synthesize loadingIndiView=_loadingIndiView;
@property(retain, nonatomic) QMCreatorView *creatorView; // @synthesize creatorView=_creatorView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *djImageView; // @synthesize djImageView=_djImageView;
@property(retain, nonatomic) UILabel *listenNumLabel; // @synthesize listenNumLabel=_listenNumLabel;
@property(retain, nonatomic) UIImageView *listenIconImageView; // @synthesize listenIconImageView=_listenIconImageView;
@property(retain, nonatomic) UIImageViewWithUserInfo *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
@property(retain, nonatomic) UIButtonWithUserInfo *imageButton; // @synthesize imageButton=_imageButton;
@property(retain, nonatomic) UIImageView *defaultImageView; // @synthesize defaultImageView=_defaultImageView;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id actionTarget; // @synthesize actionTarget=_actionTarget;
@property(nonatomic) float realHeight; // @synthesize realHeight=_realHeight;
@property(retain, nonatomic) ChannelItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)imageFileNameForItem:(id)arg1;
- (id)imageUrlForItem:(id)arg1;
- (id)trimImage:(id)arg1;
- (void)onImagetWithInfo:(id)arg1 ImageFile:(id)arg2;
- (id)defaultImage;
- (void)onNotifyColorStyleChanged:(id)arg1;
- (BOOL)titleIsMoreThanOneLine;
- (void)reloadDataForLoading:(BOOL)arg1 forNowPlaying:(BOOL)arg2;
- (void)reloadData;
- (float)titleLabelWidth;
- (void)setActionTarget:(id)arg1 action:(SEL)arg2;
- (void)imageButtonDidTap:(id)arg1;
- (void)freshSkinChange;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

