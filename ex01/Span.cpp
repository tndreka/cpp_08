/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka <tndreka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 05:07:03 by tndreka           #+#    #+#             */
/*   Updated: 2025/10/18 07:15:22 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : sp(), size(0), count(0)
{}

Span::Span(const Span& other): sp(other.sp), size(other.size), count(other.count)
{}
