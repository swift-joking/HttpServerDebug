//
//  HSDHttpConnection+Info.h
//  HttpServerDebug
//
//  Created by chenjun on 2017/12/26.
//  Copyright © 2017年 chenjun. All rights reserved.
//

#import "HSDHttpConnection.h"

@interface HSDHttpConnection (Info)

- (NSObject<HTTPResponse> *)fetchSendInfoResponseForMethod:(NSString *)method URI:(NSString *)path;

- (NSObject<HTTPResponse> *)fetchSendInfoAPIResponseForMethod:(NSString *)method paths:(NSArray *)paths parameters:(NSDictionary *)params;

@end