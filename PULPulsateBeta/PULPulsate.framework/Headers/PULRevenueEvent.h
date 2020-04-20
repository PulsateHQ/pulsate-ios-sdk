//
//  PULRevenueEvent.h
//  PULPulsate
//
//  Created by Rafael Skubisz on 08/11/2019.
//  Copyright © 2019 Pulsatehq. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface PULRevenueEvent : NSObject

@property (nonatomic, readonly) NSString* eventName;
@property (readwrite, nonatomic) CGFloat amount;
@property (nonatomic, readonly) NSString* currency;

typedef NS_ENUM(NSUInteger, PULCurrency){
    AUD, // Australian Dollar
    BGN, // Bulgarian Lev
    BRL, // Brazilian Real
    CAD, // Canadian Dollar
    CHF, // Swiss Franc
    CNY, // Yuan
    CZK, // Czech Koruna
    DKK, // Danish Krone
    EUR, // Euro
    GBP, // Pound Sterling
    HKD, // Hong Kong Dollar
    HRK, // Croatian Kuna
    HUF, // Forint
    IDR, // Rupiah
    ILS, // New Israeli Shekel
    INR, // Indian Rupee
    ISK, // Iceland Krona
    JPY, // Yen
    KRW, // South Korean Won
    MXN, // Mexican Peso
    MYR, // Malaysian Ringgit
    NOK, // Norwegian Krone
    NZD, // New Zealand Dollar
    PHP, // Philippine Peso
    PLN, // PZloty
    RON, // Leu
    RUB, // Russian Ruble
    SEK, // Swedish Krona
    SGD, // Singapore Dollar
    THB, // Baht
    TRY, // Turkish Lira
    USD, // US Dollar
    ZAR  // Rand
};

//[[PULRevenueEvent alloc] initWithName:@"bought_car" andAmount:30000 andCurrency:PULCurrency.USD];
-(instancetype)initWithName:(NSString*)eventName andAmount:(CGFloat)amount andCurrency:(PULCurrency)currency;

@end
