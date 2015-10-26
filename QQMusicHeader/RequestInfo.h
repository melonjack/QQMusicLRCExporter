//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, SKPaymentTransaction, SKProduct;

@interface RequestInfo : NSObject
{
    NSString *url;
    NSString *requestKey;
    NSString *openid;
    NSString *openKey;
    NSString *session_id;
    NSString *session_type;
    NSString *pf;
    NSString *pfkey;
    double ts;
    NSString *appid;
    NSString *productid;
    int producttype;
    NSString *payitem;
    NSData *receipt;
    NSString *billno;
    NSString *amt;
    int keyType;
    int changeKeyType;
    NSString *currencyType;
    NSString *from;
    NSString *zoneid;
    BOOL isChangeKey;
    BOOL isDepositGameCoin;
    NSString *varItem;
    NSString *applicationUserName;
    SKPaymentTransaction *skpaymentTransaction;
    SKProduct *product;
    BOOL isUi;
    int quantity;
    int productType;
    int _KeyType;
}

@property(nonatomic) int KeyType; // @synthesize KeyType=_KeyType;
@property(nonatomic) BOOL IsUi; // @synthesize IsUi=isUi;
@property(retain, nonatomic) SKProduct *Product; // @synthesize Product=product;
@property(retain, nonatomic) SKPaymentTransaction *SkpaymentTransaction; // @synthesize SkpaymentTransaction=skpaymentTransaction;
@property(copy, nonatomic) NSString *ApplicationUserName; // @synthesize ApplicationUserName=applicationUserName;
@property(copy, nonatomic) NSString *VarItem; // @synthesize VarItem=varItem;
@property(nonatomic) BOOL IsDepositGameCoin; // @synthesize IsDepositGameCoin=isDepositGameCoin;
@property(nonatomic) BOOL IsChangeKey; // @synthesize IsChangeKey=isChangeKey;
@property(copy, nonatomic) NSString *Zoneid; // @synthesize Zoneid=zoneid;
@property(copy, nonatomic) NSString *From; // @synthesize From=from;
@property(readonly, nonatomic) int Quantity; // @synthesize Quantity=quantity;
@property(copy, nonatomic) NSString *CurrencyType; // @synthesize CurrencyType=currencyType;
@property(nonatomic) int ChangeKeyType; // @synthesize ChangeKeyType=changeKeyType;
@property(copy, nonatomic) NSString *Amt; // @synthesize Amt=amt;
@property(copy, nonatomic) NSString *Billno; // @synthesize Billno=billno;
@property(retain, nonatomic) NSData *Receipt; // @synthesize Receipt=receipt;
@property(copy, nonatomic) NSString *Payitem; // @synthesize Payitem=payitem;
@property(nonatomic) int ProductType; // @synthesize ProductType=productType;
@property(copy, nonatomic) NSString *Productid; // @synthesize Productid=productid;
@property(copy, nonatomic) NSString *Appid; // @synthesize Appid=appid;
@property(nonatomic) double Ts; // @synthesize Ts=ts;
@property(copy, nonatomic) NSString *Pfkey; // @synthesize Pfkey=pfkey;
@property(copy, nonatomic) NSString *Pf; // @synthesize Pf=pf;
@property(copy, nonatomic) NSString *Session_type; // @synthesize Session_type=session_type;
@property(copy, nonatomic) NSString *Session_id; // @synthesize Session_id=session_id;
@property(copy, nonatomic) NSString *OpenKey; // @synthesize OpenKey=openKey;
@property(copy, nonatomic) NSString *Openid; // @synthesize Openid=openid;
@property(copy, nonatomic) NSString *RequestKey; // @synthesize RequestKey=requestKey;
@property(copy, nonatomic) NSString *Url; // @synthesize Url=url;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (id)initwithOpenId:(id)arg1 withOpenKey:(id)arg2 whitSessionId:(id)arg3 withSessionType:(id)arg4 withPf:(id)arg5 whithPfkey:(id)arg6 withProductid:(id)arg7 withProductType:(int)arg8 withPayItem:(id)arg9;
- (id)init;

@end
