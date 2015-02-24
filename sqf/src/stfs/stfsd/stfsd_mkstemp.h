#ifndef STFSD_MKSTEMP_H
#define STFSD_MKSTEMP_H
///////////////////////////////////////////////////////////////////////////////
// 
/// \file    stfsd_mkstemp.h
/// \brief  
///   
//                                                                                 
// @@@ START COPYRIGHT @@@
//
// (C) Copyright 2008-2014 Hewlett-Packard Development Company, L.P.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
// @@@ END COPYRIGHT @@@
///////////////////////////////////////////////////////////////////////////////

namespace STFS {

int
STFSd_mkstemp(char                       *pp_Ctemplate,
              int                         pv_OpenerNodeId,
              int                         pv_OpenerPID,
              STFS_ExternalFileMetadata *&pp_Efm,
              STFS_OpenIdentifier       *&pp_OpenId);

}
#endif //STFSD_MKSTEMP_H