//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface QLLabelButton : UIView
{
    id <QLLabelButtonDelegate> _delegate;
    UILabel *_label;
    UIButton *_button;
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property id <QLLabelButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)presentLogin;
- (void)dealloc;
- (id)initWithLabelTitle:(id)arg1 frame:(struct CGRect)arg2 buttonTitle:(id)arg3;

@end

