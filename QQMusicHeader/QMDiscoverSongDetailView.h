//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QMSongAnnotationManagerDelegate.h"

@class NSString, QMSongAnnotation, QMSongAnnotationViewManager, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QMDiscoverSongDetailView : UIView <QMSongAnnotationManagerDelegate>
{
    QMSongAnnotation *_annotation;
    id _callback;
    NSString *_reuseIdentifier;
    UIImageView *_albumCoverImageView;
    UILabel *_singerLable;
    UILabel *_songNameLable;
    UILabel *_timeLable;
    UILabel *_userNameLable;
    UIImageView *_avatarBgImageView;
    UIImageView *_avatarView;
    UIView *_operButtonView;
    QMSongAnnotationViewManager *_viewManager;
}

@property(retain, nonatomic) QMSongAnnotationViewManager *viewManager; // @synthesize viewManager=_viewManager;
@property(retain, nonatomic) UIView *operButtonView; // @synthesize operButtonView=_operButtonView;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIImageView *avatarBgImageView; // @synthesize avatarBgImageView=_avatarBgImageView;
@property(retain, nonatomic) UILabel *userNameLable; // @synthesize userNameLable=_userNameLable;
@property(retain, nonatomic) UILabel *timeLable; // @synthesize timeLable=_timeLable;
@property(retain, nonatomic) UILabel *songNameLable; // @synthesize songNameLable=_songNameLable;
@property(retain, nonatomic) UILabel *singerLable; // @synthesize singerLable=_singerLable;
@property(retain, nonatomic) UIImageView *albumCoverImageView; // @synthesize albumCoverImageView=_albumCoverImageView;
@property(retain, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(nonatomic) __weak id callback; // @synthesize callback=_callback;
@property(retain, nonatomic) QMSongAnnotation *annotation; // @synthesize annotation=_annotation;
- (void).cxx_destruct;
- (void)enterProfileVC;
- (void)resetViewManager;
- (void)downloadSong:(id)arg1;
- (void)onClickMore;
- (void)onClickShare;
- (void)onClickDown;
- (void)onClickLike;
- (void)onClickPlay;
- (void)updateAvatar:(id)arg1;
- (void)updateAlbumCover:(id)arg1;
- (BOOL)isLikeBtnSelected;
- (void)setLikeBtnSelected:(BOOL)arg1;
- (void)hideUserView;
- (void)showUserView;
- (void)showOrHideOperButtonView;
- (void)hideOperButtonView;
- (void)prepareForScroll;
- (void)prepareForReuse;
- (void)showOperButtonView;
- (void)initOperButtonView;
- (id)relatTime:(id)arg1;
- (void)updateSubViews;
- (void)initSubViews;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

