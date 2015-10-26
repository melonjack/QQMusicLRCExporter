//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BETouchView.h"

@class NSMutableArray, NSString, UIColor, UIImage, UIPageControl, UIView;

__attribute__((visibility("hidden")))
@interface BEActionSheet : BETouchView
{
    NSMutableArray *_actionSheetButtons;
    BOOL _isShowVolume;
    BOOL _isShowAutoDown;
    BOOL _isAutoDownOn;
    id <BEActionSheetDelegate> _delegate;
    id _object;
    NSString *_title;
    UIPageControl *_pageControl;
    UIView *_bgView;
    id _firstAccControl;
    UIImage *_titleImage;
    UIColor *_titleColor;
    CDUnknownBlockType _choosedIndexBlock;
}

@property(copy, nonatomic) CDUnknownBlockType choosedIndexBlock; // @synthesize choosedIndexBlock=_choosedIndexBlock;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIImage *titleImage; // @synthesize titleImage=_titleImage;
@property(retain, nonatomic) id firstAccControl; // @synthesize firstAccControl=_firstAccControl;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) BOOL isAutoDownOn; // @synthesize isAutoDownOn=_isAutoDownOn;
@property(nonatomic) BOOL isShowAutoDown; // @synthesize isShowAutoDown=_isShowAutoDown;
@property(nonatomic) BOOL isShowVolume; // @synthesize isShowVolume=_isShowVolume;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id object; // @synthesize object=_object;
@property(nonatomic) __weak id <BEActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) int numberOfButtons;
@property(readonly, nonatomic) int firstOtherButtonIndex;
- (void)fireButtonClick:(id)arg1;
- (void)cancel;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)showOK;
- (void)cancelAnimated:(BOOL)arg1;
- (void)hide;
- (void)show;
- (void)showWithBlock:(CDUnknownBlockType)arg1;
- (void)_registerTag;
- (void)subViewAnimate;
- (void)setTitleColor:(id)arg1 titleImage:(id)arg2;
- (void)_buildAll;
- (void)customTitleView;
- (int)getActionSheetTag;
- (void)addContentView;
- (int)getTotalLength;
- (BOOL)addLine;
- (void)changePage:(id)arg1;
- (void)_addBgView;
- (id)createButtonWithImage:(id)arg1 hightLightImage:(id)arg2 title:(id)arg3;
- (id)initWithDelegate:(id)arg1 andActionSheetButtons:(id)arg2 withTitle:(id)arg3 isShowAutoDown:(BOOL)arg4 isAutoDownOn:(BOOL)arg5;
- (id)initWithDelegate:(id)arg1 andActionSheetButtons:(id)arg2 withTitle:(id)arg3 isShowVolume:(BOOL)arg4;
- (id)initWithDelegate:(id)arg1 andActionSheetButtons:(id)arg2 withTitle:(id)arg3;

@end
