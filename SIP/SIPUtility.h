/*
* Copyright 2008 Free Software Foundation, Inc.
*
* This software is distributed under the terms of the GNU Public License.
* See the COPYING file in the main directory for details.
*
* This use of this software may be subject to additional restrictions.
* See the LEGAL file in the main directory for details.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/




#ifndef SIP_UTILITY_H
#define SIP_UTILITY_H


namespace SIP {

/**@name SIP-specific exceptions. */
//@{
class SIPException {};
class SIPError : public SIPException {};
class SIPTimeout : public SIPException {};
//@}


/** Codec codes, from RFC-3551, Table 4. */
enum RTPCodec {
	RTPuLaw=0,
	RTPGSM610=3
};


void get_owner_ip( osip_message_t * msg, char * o_addr );

void get_rtp_params(const osip_message_t * msg, char * port, char * ip_addr );

void make_tag( char * tag );

void make_branch(char * branch);


};
#endif
// vim: ts=4 sw=4
