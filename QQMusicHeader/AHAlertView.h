//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImage, UILabel, UITextField;

@interface AHAlertView : UIView
{
    BOOL hasLayedOut;
    BOOL visible;
    NSString *_title;
    NSString *_message;
    NSMutableArray *_otherButtons;
    UIImage *_backgroundImage;
    UIButton *_destructiveButton;
    UILabel *titleLabel;
    int _dismissalStyle;
    UIView *backgroundImageView;
    NSMutableDictionary *cancelButtonBackgroundImagesForControlStates;
    NSMutableDictionary *buttonBackgroundImagesForControlStates;
    NSMutableDictionary *destructiveButtonBackgroundImagesForControlStates;
    int _presentationStyle;
    UITextField *plainTextField;
    NSDictionary *titleTextAttributes;
    UILabel *messageLabel;
    int alertViewStyle;
    NSDictionary *messageTextAttributes;
    UIButton *_cancelButton;
    NSDictionary *buttonTitleTextAttributes;
    NSDictionary *cancelButtonTitleTextAttributes;
    UITextField *secureTextField;
    struct UIEdgeInsets contentInsets;
}

+ (BOOL)alreadyPopover;
+ (id)glassButtonBackgroundImageWithGradientLocations:(float *)arg1 components:(float *)arg2 locationCount:(int)arg3;
+ (id)cancelButtonBackgroundImage;
+ (id)normalButtonBackgroundImage;
+ (id)alertBackgroundImage;
+ (void)dismissAlertView;
+ (id)keyWindow;
+ (void)initialize;
@property(retain, nonatomic) UITextField *secureTextField; // @synthesize secureTextField;
@property(copy, nonatomic) NSDictionary *cancelButtonTitleTextAttributes; // @synthesize cancelButtonTitleTextAttributes;
@property(copy, nonatomic) NSDictionary *buttonTitleTextAttributes; // @synthesize buttonTitleTextAttributes;
@property(readonly, nonatomic, getter=isVisible) BOOL visible; // @synthesize visible;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(copy, nonatomic) NSDictionary *messageTextAttributes; // @synthesize messageTextAttributes;
@property(nonatomic) int alertViewStyle; // @synthesize alertViewStyle;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel;
@property(copy, nonatomic) NSDictionary *titleTextAttributes; // @synthesize titleTextAttributes;
@property(retain, nonatomic) UITextField *plainTextField; // @synthesize plainTextField;
@property(nonatomic) int presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(retain, nonatomic) NSMutableDictionary *destructiveButtonBackgroundImagesForControlStates; // @synthesize destructiveButtonBackgroundImagesForControlStates;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets;
@property(retain, nonatomic) NSMutableDictionary *buttonBackgroundImagesForControlStates; // @synthesize buttonBackgroundImagesForControlStates;
@property(retain, nonatomic) NSMutableDictionary *cancelButtonBackgroundImagesForControlStates; // @synthesize cancelButtonBackgroundImagesForControlStates;
@property(retain, nonatomic) UIView *backgroundImageView; // @synthesize backgroundImageView;
@property(nonatomic) int dismissalStyle; // @synthesize dismissalStyle=_dismissalStyle;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
@property(retain, nonatomic) UIButton *destructiveButton; // @synthesize destructiveButton=_destructiveButton;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) NSMutableArray *otherButtons; // @synthesize otherButtons=_otherButtons;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)backgroundGradientImageWithSize:(struct CGSize)arg1;
- (void)deviceOrientationChanged:(id)arg1;
- (struct CGAffineTransform)transformForCurrentOrientation;
- (void)applyBackgroundImages:(id)arg1 toButton:(id)arg2;
- (void)applyTextAttributes:(id)arg1 toButton:(id)arg2;
- (void)applyTextAttributes:(id)arg1 toLabel:(id)arg2;
- (id)addLabelAsSubview;
- (void)layoutSubviews;
- (void)performDismissalAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)performPresentationAnimation;
- (void)buttonWasPressed:(id)arg1;
- (void)buttonTouchCancel:(id)arg1;
- (void)buttonTouchDown:(id)arg1;
- (void)dismissWithStyle:(int)arg1;
- (void)dismiss;
- (void)showWithStyle:(int)arg1;
- (void)show;
- (id)destructiveButtonBackgroundImageForState:(unsigned int)arg1;
- (void)setDestructiveButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2;
- (id)cancelButtonBackgroundImageForState:(unsigned int)arg1;
- (void)setCancelButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2;
- (id)buttonBackgroundImageForState:(unsigned int)arg1;
- (void)setButtonBackgroundImage:(id)arg1 forState:(unsigned int)arg2;
- (id)textFieldAtIndex:(int)arg1;
- (void)setCancelButtonTitle:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)setDestructiveButtonTitle:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)addButtonWithTitle:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)buttonWithTitle:(id)arg1 associatedBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 message:(id)arg2;

@end
