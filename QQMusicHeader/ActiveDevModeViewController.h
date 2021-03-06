//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController.h"

#import "UITextFieldDelegate.h"

@class NSMutableArray, NSString, UITextField, UIView;

__attribute__((visibility("hidden")))
@interface ActiveDevModeViewController : SkinViewController <UITextFieldDelegate>
{
    UIView *_ledNumberContentView;
    NSMutableArray *_ledNumberViews;
    UITextField *_hiddenTextField;
}

@property(retain, nonatomic) UITextField *hiddenTextField; // @synthesize hiddenTextField=_hiddenTextField;
@property(retain, nonatomic) NSMutableArray *ledNumberViews; // @synthesize ledNumberViews=_ledNumberViews;
@property(retain, nonatomic) UIView *ledNumberContentView; // @synthesize ledNumberContentView=_ledNumberContentView;
- (void).cxx_destruct;
- (void)_handleAlertViewOk:(BOOL)arg1;
- (void)_onNotifyTextFieldChanged:(id)arg1;
- (void)_setLEDViewText:(id)arg1;
- (void)headerCancel:(id)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

