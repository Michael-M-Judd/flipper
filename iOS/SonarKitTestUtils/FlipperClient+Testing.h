/*
 *  Copyright (c) 2018-present, Facebook, Inc.
 *
 *  This source code is licensed under the MIT license found in the LICENSE
 *  file in the root directory of this source tree.
 *
 */
#ifndef __cplusplus
#error This header can only be included in .mm (ObjC++) files
#endif

#import <Foundation/Foundation.h>

#import <Flipper/SonarClient.h>
#import <FlipperKit/FlipperClient.h>

@interface FlipperClient (Testing)

- (instancetype)initWithCppClient:(facebook::flipper::SonarClient *)cppClient;

@end
