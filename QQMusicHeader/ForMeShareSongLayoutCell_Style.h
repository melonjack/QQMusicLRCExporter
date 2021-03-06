//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChannelLayoutCell.h"

#import "ChannelLayoutCellScrollViewDelegate.h"
#import "OHAttributedLabelDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSString, OHAttributedLabel, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface ForMeShareSongLayoutCell_Style : ChannelLayoutCell <ChannelLayoutCellScrollViewDelegate, UIAlertViewDelegate, OHAttributedLabelDelegate>
{
    UIImageView *bgView;
    UIView *mainContentView;
    UIImageView *mainImgView;
    UIButton *playPauseBtn;
    UIActivityIndicatorView *bufferActivityView;
    UILabel *mainLabel;
    UILabel *subLabel;
    UIImageView *typeLogoView;
    UILabel *typeLogoLabel;
    OHAttributedLabel *recLabel;
    UILabel *reasonLabel;
    UIButton *expandBtn;
    UIImageView *expandImageView;
    UIImageView *lineView;
    UIButton *zanBtn;
    UIImageView *zanImageView;
    UILabel *zanLabel;
    UIImageView *sepLine;
    UIButton *favBtn;
    UIImageView *favImageView;
    UILabel *favLabel;
    UIButton *orderBtn;
    UIImageView *orderImageView;
    UILabel *orderLabel;
    UIImageView *zansView;
    OHAttributedLabel *zansLabel;
    id <QMChannelInteractiveProtocol> delegate;
    id <ForMeDelegate> forMeDelagate;
}

+ (float)cellHeight;
@property(nonatomic) __weak id <ForMeDelegate> forMeDelagate; // @synthesize forMeDelagate;
- (void)setDelegate:(id)arg1;
- (id)delegate;
@property(retain, nonatomic) OHAttributedLabel *zansLabel; // @synthesize zansLabel;
@property(retain, nonatomic) UIImageView *zansView; // @synthesize zansView;
@property(retain, nonatomic) UILabel *orderLabel; // @synthesize orderLabel;
@property(retain, nonatomic) UIImageView *orderImageView; // @synthesize orderImageView;
@property(retain, nonatomic) UIButton *orderBtn; // @synthesize orderBtn;
@property(retain, nonatomic) UILabel *favLabel; // @synthesize favLabel;
@property(retain, nonatomic) UIImageView *favImageView; // @synthesize favImageView;
@property(retain, nonatomic) UIButton *favBtn; // @synthesize favBtn;
@property(retain, nonatomic) UIImageView *sepLine; // @synthesize sepLine;
@property(retain, nonatomic) UILabel *zanLabel; // @synthesize zanLabel;
@property(retain, nonatomic) UIImageView *zanImageView; // @synthesize zanImageView;
@property(retain, nonatomic) UIButton *zanBtn; // @synthesize zanBtn;
@property(retain, nonatomic) UIImageView *lineView; // @synthesize lineView;
@property(retain, nonatomic) UIImageView *expandImageView; // @synthesize expandImageView;
@property(retain, nonatomic) UIButton *expandBtn; // @synthesize expandBtn;
@property(retain, nonatomic) UILabel *reasonLabel; // @synthesize reasonLabel;
@property(retain, nonatomic) OHAttributedLabel *recLabel; // @synthesize recLabel;
@property(retain, nonatomic) UILabel *typeLogoLabel; // @synthesize typeLogoLabel;
@property(retain, nonatomic) UIImageView *typeLogoView; // @synthesize typeLogoView;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel;
@property(retain, nonatomic) UIActivityIndicatorView *bufferActivityView; // @synthesize bufferActivityView;
@property(retain, nonatomic) UIButton *playPauseBtn; // @synthesize playPauseBtn;
@property(retain, nonatomic) UIImageView *mainImgView; // @synthesize mainImgView;
@property(retain, nonatomic) UIView *mainContentView; // @synthesize mainContentView;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView;
- (void).cxx_destruct;
- (BOOL)shouldPreloadNextSubview;
- (void)playOrPauseChannel:(id)arg1;
- (void)setPlayState:(int)arg1 atIndex:(int)arg2;
- (void)endDecelerating:(id)arg1 animated:(BOOL)arg2;
- (id)_arraryNeedUpdate;
- (void)beginDecelerating:(id)arg1 animated:(BOOL)arg2;
- (void)bCellScrolling:(BOOL)arg1 animated:(BOOL)arg2;
- (void)isScrollToChannel:(unsigned int)arg1 progress:(float)arg2;
- (void)didScrollToChannel:(unsigned int)arg1;
- (unsigned int)numberOfChannelCellsInCLScrollView:(id)arg1;
- (void)scrollToLastIfErrOccours;
- (void)drawCell:(id)arg1 atIndex:(unsigned int)arg2;
- (struct CGRect)frameForCellAtIndex:(unsigned int)arg1;
- (id)reuseIdentifier;
- (Class)channelCellClass;
- (void)doFavAction:(id)arg1;
- (void)requestToRelaodThisCell;
- (void)doExpandAction:(id)arg1;
- (void)doZanAction:(id)arg1;
- (BOOL)attributedLabel:(id)arg1 shouldFollowLink:(id)arg2;
- (BOOL)isPlayingThisList;
- (void)createFootView;
- (void)createHeaderView;
- (void)createScrollView;
- (void)createBackGroundView;
- (void)refreshView;
- (void)refreshFootView;
- (void)refreshHeaderView;
- (void)setupCustomizedUI;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

