//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WloginTranCallbackProtocol.h"

@class MemSig, NSMutableDictionary, QRCodeCmd, WloginTranSdk;

@interface QRCodeSdk : NSObject <WloginTranCallbackProtocol>
{
    id qrCodeDelegate;
    unsigned long long ddwAccountUin;
    MemSig *accountTGTSig;
    WloginTranSdk *qrCodeTransportSdk;
    id wtloginSdkHelper;
    int iQRCodeState;
    QRCodeCmd *qrCodeCmd;
    NSMutableDictionary *uploadTlvDataDic;
}

- (void)tranFailed:(int)arg1 withMsg:(id)arg2;
- (void)tranSuccessWithData:(id)arg1;
- (BOOL)addConfirmUploadTlv:(int)arg1 andData:(id)arg2;
- (int)confirmQRCode:(id)arg1 withT:(int)arg2 andData:(id)arg3;
- (int)verifyQRCode:(id)arg1 forAccount:(id)arg2 andAppid:(unsigned int)arg3;
- (id)getVerifyTlvDataBy:(int)arg1;
- (unsigned int)getAppidByLoginQRCode:(id)arg1;
- (BOOL)isValiedLoginQRCode:(id)arg1;
- (id)parseQRCode:(id)arg1;
- (void)dealloc;
- (id)initWithQRCodeSdk:(id)arg1 andDelegate:(id)arg2;

@end

