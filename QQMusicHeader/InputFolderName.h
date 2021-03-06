//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, UIAlertView, UITextField;

__attribute__((visibility("hidden")))
@interface InputFolderName : NSObject <UIAlertViewDelegate, UITextFieldDelegate>
{
    NSString *_strDefaultFolderName;
    id <InputFolderNameDelegate> _delegate;
    NSObject *_object;
    UIAlertView *_alertView;
    UITextField *_textField;
    int _inputFolderNameType;
    NSString *_viewTitle;
    BOOL _useSystemTextField;
    BOOL _isSaveOK;
}

@property(nonatomic) BOOL isSaveOK; // @synthesize isSaveOK=_isSaveOK;
@property(nonatomic) BOOL useSystemTextField; // @synthesize useSystemTextField=_useSystemTextField;
@property(retain, nonatomic) NSString *viewTitle; // @synthesize viewTitle=_viewTitle;
@property(nonatomic) int inputFolderNameType; // @synthesize inputFolderNameType=_inputFolderNameType;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) NSObject *object; // @synthesize object=_object;
@property(nonatomic) __weak id <InputFolderNameDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *strDefaultFolderName; // @synthesize strDefaultFolderName=_strDefaultFolderName;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)isTextOK:(id)arg1 alertView:(id)arg2 confirmBt:(id)arg3;
- (BOOL)isFolderNameExist:(id)arg1;
- (BOOL)isExistForbiddenChar:(id)arg1 error:(id *)arg2;
- (void)willPresentAlertView:(id)arg1;
- (void)_layoutSubViews;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)isTextOK:(id)arg1;
- (void)show;
- (id)initWithDefaultFolderName:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

